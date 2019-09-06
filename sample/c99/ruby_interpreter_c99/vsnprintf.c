




typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;







typedef long int __intmax_t;
typedef unsigned long int __uintmax_t;


typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;




typedef int __sig_atomic_t;
typedef __loff_t loff_t;



typedef __ino_t ino_t;
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;
typedef __pid_t pid_t;
typedef __ssize_t ssize_t;






typedef __clockid_t clockid_t;






typedef __time_t time_t;






typedef __timer_t timer_t;
typedef long unsigned int size_t;
typedef __int8_t int8_t;
typedef __int16_t int16_t;
typedef __int32_t int32_t;
typedef __int64_t int64_t;
typedef unsigned int u_int8_t ;
typedef unsigned int u_int16_t ;
typedef unsigned int u_int32_t ;
typedef unsigned int u_int64_t ;

typedef int register_t ;
typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
typedef char* va_list;
typedef char* __gnuc_va_list;
typedef long int ptrdiff_t;
typedef int wchar_t;
struct __sbuf {
 unsigned char *_base;
 size_t _size;
};
typedef struct __sFILE {
 unsigned char *_p;



 size_t _w;
 short _flags;
 short _file;
 struct __sbuf _bf;



 int (*vwrite)( );
 const char *(*vextra)( );
} FILE;
struct __siov {
 const void *iov_base;
 size_t iov_len;
};
struct __suio {
 struct __siov *uio_iov;
 int uio_iovcnt;
 size_t uio_resid;
};







static int
BSD__sfvwrite(register FILE *fp, register struct __suio *uio)
{
 register size_t len;
 register const char *p;
 register struct __siov *iov;
 register size_t w;

 if ((len = uio->uio_resid) == 0)
  return (0);





 iov = uio->uio_iov;
 p = iov->iov_base;
 len = iov->iov_len;
 iov++;







 if (fp->_flags & 0x0002) {



 } else if ((fp->_flags & 0x0001) == 0) {
  do {
   while (len == 0) { ;; p = iov->iov_base; len = iov->iov_len; iov++; };
   w = fp->_w;
   if (fp->_flags & 0x0200) {
    if (len < w)
     w = len;
    (void)memcpy((void *)fp->_p, (void *)p, (size_t)(w));
    fp->_w -= w;
    fp->_p += w;
    w = len;
   } else {



   }
   p += w;
   len -= w;
  } while ((uio->uio_resid -= w) != 0);
 } else {



 }
 return (0);
}
static int
BSD__sprint(FILE *fp, register struct __suio *uio)
{
 register int err;

 if (uio->uio_resid == 0) {
  uio->uio_iovcnt = 0;
  return (0);
 }
 err = (*fp->vwrite)(fp, uio);
 uio->uio_resid = 0;
 uio->uio_iovcnt = 0;
 return (err);
}







static int
BSD__sbprintf(register FILE *fp, const char *fmt, va_list ap)
{

 return 0;
}
static char *
BSD__ultoa(register unsigned long val, char *endp, int base, int octzero, const char *xdigs)
{
 register char *cp = endp;
 register long sval;





 switch (base) {
 case 10:
  if (val < 10) {
   *--cp = (char)((val) + '0');
   return (cp);
  }






  if (val > 9223372036854775807L) {
   *--cp = (char)((val % 10) + '0');
   sval = val / 10;
  } else
   sval = val;
  do {
   *--cp = (char)((sval % 10) + '0');
   sval /= 10;
  } while (sval != 0);
  break;

 case 8:
  do {
   *--cp = (char)((val & 7) + '0');
   val >>= 3;
  } while (val);
  if (octzero && *cp != '0')
   *--cp = '0';
  break;

 case 16:
  do {
   *--cp = xdigs[val & 15];
   val >>= 4;
  } while (val);
  break;

 default:



  break;
 }
 return (cp);
}
static ssize_t
BSD_vfprintf(FILE *fp, const char *fmt0, va_list ap)
{



 register const char *fmt;
 register int ch;
 register int n;
 register const char *cp;
 register struct __siov *iovp;
 register int flags;
 ssize_t ret;
 int width;
 int prec;
 char sign;
 unsigned long MAYBE_UNUSED(ulval);



 int base;
 int dprec;
 long fieldsz;
 long realsz;
 int size;
 const char *xdigs = 0;

 struct __suio uio;
 struct __siov iov[8];
 char buf[68];
 char ox[4];
 char *const ebuf = buf + sizeof(buf);
 static const char blanks[16] =
  {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '};
 static const char zeroes[16] =
  {'0','0','0','0','0','0','0','0','0','0','0','0','0','0','0','0'};
 if ((fp->_flags & (0x0002|0x0008|0x0010)) == (0x0002|0x0008) &&
     fp->_file >= 0)
  return (BSD__sbprintf(fp, fmt0, ap));

 fmt = fmt0;
 uio.uio_iov = iovp = iov;
 uio.uio_resid = 0;
 uio.uio_iovcnt = 0;
 ret = 0;
 xdigs = 0;




 for (;;) {
  size_t nc;
  for (cp = fmt; (ch = *fmt) != '\0' && ch != '%'; fmt++)
             ;
  if ((nc = fmt - cp) != 0) {
   { iovp->iov_base = (cp); iovp->iov_len = (nc); uio.uio_resid += (nc); iovp++; if (++uio.uio_iovcnt >= 8) { if (BSD__sprint(fp, &uio)) goto error; iovp = iov; } };
   ret += nc;
  }
  if (ch == '\0')
   goto done;
  fmt++;

  flags = 0;
  dprec = 0;
  width = 0;
  prec = -1;
  sign = '\0';

rflag: ch = *fmt++;
reswitch: switch (ch) {
  case ' ':





   if (!sign)
    sign = ' ';
   goto rflag;
  case '#':
   flags |= 0x001;
   goto rflag;
  case '*':






   if ((width = __builtin_va_arg()) >= 0)
    goto rflag;
   width = -width;

  case '-':
   flags |= 0x004;
   goto rflag;
  case '+':
   sign = '+';
   goto rflag;
  case '.':
   if ((ch = *fmt++) == '*') {
    n = __builtin_va_arg();
    prec = n < 0 ? -1 : n;
    goto rflag;
   }
   n = 0;
   while (((unsigned)((ch) - '0') <= 9)) {
    n = 10 * n + ((ch) - '0');
    ch = *fmt++;
   }
   prec = n < 0 ? -1 : n;
   goto reswitch;
  case '0':





   flags |= 0x080;
   goto rflag;
  case '1': case '2': case '3': case '4':
  case '5': case '6': case '7': case '8': case '9':
   n = 0;
   do {
    n = 10 * n + ((ch) - '0');
    ch = *fmt++;
   } while (((unsigned)((ch) - '0') <= 9));
   width = n;
   goto reswitch;





  case 'h':
   flags |= 0x040;
   goto rflag;

  case 't':


  case 'z':

  case 'l':
   flags |= 0x010;

   goto rflag;
  case 'c':
   cp = buf;
   *buf = (char)__builtin_va_arg();
   size = 1;
   sign = '\0';
   break;
  case 'i':
   if (fp->vextra && (flags & (0x010|0x040)) == 0x010 &&
       1) {
    fmt += 0;
    { if (uio.uio_resid && BSD__sprint(fp, &uio)) goto error; uio.uio_iovcnt = 0; iovp = iov; };




    ulval = __builtin_va_arg();
    cp = (*fp->vextra)(fp, sizeof(ulval), &ulval, &fieldsz, sign);

    sign = '\0';
    if (!cp) goto error;
    if (prec < 0) goto long_len;
    size = fieldsz < prec ? (int)fieldsz : prec;
    break;
   }
   goto decimal;
  case 'D':
   flags |= 0x010;

  case 'd':
  decimal:
   {
    ulval = (flags&0x010 ? __builtin_va_arg() : flags&0x040 ? (long)(short)__builtin_va_arg() : (long)__builtin_va_arg());
    if ((long)ulval < 0) {
     ulval = (unsigned long)(-(long)ulval);
     sign = '-';
    }
   }
   base = 10;
   goto number;
  case 'n':





   if (flags & 0x010)

    *__builtin_va_arg() = ret;
   else if (flags & 0x040)
    *__builtin_va_arg() = (short)ret;
   else
    *__builtin_va_arg() = (int)ret;
   continue;
  case 'O':
   flags |= 0x010;

  case 'o':





    ulval = (flags&0x010 ? __builtin_va_arg() : flags&0x040 ? (unsigned long)(unsigned short)__builtin_va_arg() : (unsigned long)__builtin_va_arg());
   base = 8;
   goto nosign;
  case 'p':







   prec = (int)(sizeof(void*)*8/4);




   ulval = (unsigned long)__builtin_va_arg();



   flags = (flags) | 0x002;


   base = 16;
   xdigs = "0123456789abcdef";
   ch = 'x';
   goto nosign;
  case 's':
   if ((cp = __builtin_va_arg()) == ((void*)0))
    cp = "(null)";
   if (prec >= 0) {





    const char *p = (char *)memchr(cp, 0, prec);

    if (p != ((void*)0) && (p - cp) < prec)
     size = (int)(p - cp);
    else
     size = prec;
   }
   else {
    fieldsz = strlen(cp);
    goto long_len;
   }
   sign = '\0';
   break;
  case 'U':
   flags |= 0x010;

  case 'u':





    ulval = (flags&0x010 ? __builtin_va_arg() : flags&0x040 ? (unsigned long)(unsigned short)__builtin_va_arg() : (unsigned long)__builtin_va_arg());
   base = 10;
   goto nosign;
  case 'X':
   xdigs = "0123456789ABCDEF";
   goto hex;
  case 'x':
   xdigs = "0123456789abcdef";
hex:





    ulval = (flags&0x010 ? __builtin_va_arg() : flags&0x040 ? (unsigned long)(unsigned short)__builtin_va_arg() : (unsigned long)__builtin_va_arg());
   base = 16;

   if (flags & 0x001 &&



       ulval != 0

       )
    flags |= 0x002;


nosign: sign = '\0';





number: if ((dprec = prec) >= 0)
    flags &= ~0x080;






   cp = ebuf;
   {
    if (ulval != 0 || prec != 0)
     cp = BSD__ultoa(ulval, ebuf, base,
         flags & 0x001, xdigs);
   }
   size = (int)(ebuf - cp);
   break;
  default:
   if (ch == '\0')
    goto done;

   cp = buf;
   *buf = ch;
   size = 1;
   sign = '\0';
   break;
  }
  fieldsz = size;
long_len:
  realsz = dprec > fieldsz ? dprec : fieldsz;
  if (sign)
   realsz++;
  if (flags & 0x002)
   realsz += 2;


  if ((flags & (0x004|0x080)) == 0)
   { if ((n = ((width - realsz))) > 0) { while (n > 16) { { iovp->iov_base = (((blanks))); iovp->iov_len = (16); uio.uio_resid += (16); iovp++; if (++uio.uio_iovcnt >= 8) { if (BSD__sprint(fp, &uio)) goto error; iovp = iov; } }; n -= 16; } { iovp->iov_base = (((blanks))); iovp->iov_len = (n); uio.uio_resid += (n); iovp++; if (++uio.uio_iovcnt >= 8) { if (BSD__sprint(fp, &uio)) goto error; iovp = iov; } }; } };


  if (sign) {
   { iovp->iov_base = (&sign); iovp->iov_len = (1); uio.uio_resid += (1); iovp++; if (++uio.uio_iovcnt >= 8) { if (BSD__sprint(fp, &uio)) goto error; iovp = iov; } };
  }
  if (flags & 0x002) {
   ox[0] = '0';
   ox[1] = ch;
   { iovp->iov_base = (ox); iovp->iov_len = (2); uio.uio_resid += (2); iovp++; if (++uio.uio_iovcnt >= 8) { if (BSD__sprint(fp, &uio)) goto error; iovp = iov; } };
  }


  if ((flags & (0x004|0x080)) == 0x080)
   { if ((n = ((width - realsz))) > 0) { while (n > 16) { { iovp->iov_base = (((zeroes))); iovp->iov_len = (16); uio.uio_resid += (16); iovp++; if (++uio.uio_iovcnt >= 8) { if (BSD__sprint(fp, &uio)) goto error; iovp = iov; } }; n -= 16; } { iovp->iov_base = (((zeroes))); iovp->iov_len = (n); uio.uio_resid += (n); iovp++; if (++uio.uio_iovcnt >= 8) { if (BSD__sprint(fp, &uio)) goto error; iovp = iov; } }; } };


  { if ((n = ((dprec - fieldsz))) > 0) { while (n > 16) { { iovp->iov_base = (((zeroes))); iovp->iov_len = (16); uio.uio_resid += (16); iovp++; if (++uio.uio_iovcnt >= 8) { if (BSD__sprint(fp, &uio)) goto error; iovp = iov; } }; n -= 16; } { iovp->iov_base = (((zeroes))); iovp->iov_len = (n); uio.uio_resid += (n); iovp++; if (++uio.uio_iovcnt >= 8) { if (BSD__sprint(fp, &uio)) goto error; iovp = iov; } }; } };
  { iovp->iov_base = (cp); iovp->iov_len = (fieldsz); uio.uio_resid += (fieldsz); iovp++; if (++uio.uio_iovcnt >= 8) { if (BSD__sprint(fp, &uio)) goto error; iovp = iov; } };


  if (flags & 0x004)
   { if ((n = ((width - realsz))) > 0) { while (n > 16) { { iovp->iov_base = (((blanks))); iovp->iov_len = (16); uio.uio_resid += (16); iovp++; if (++uio.uio_iovcnt >= 8) { if (BSD__sprint(fp, &uio)) goto error; iovp = iov; } }; n -= 16; } { iovp->iov_base = (((blanks))); iovp->iov_len = (n); uio.uio_resid += (n); iovp++; if (++uio.uio_iovcnt >= 8) { if (BSD__sprint(fp, &uio)) goto error; iovp = iov; } }; } };


  ret += width > realsz ? width : realsz;

  { if (uio.uio_resid && BSD__sprint(fp, &uio)) goto error; uio.uio_iovcnt = 0; iovp = iov; };
 }
done:
 { if (uio.uio_resid && BSD__sprint(fp, &uio)) goto error; uio.uio_iovcnt = 0; iovp = iov; };
error:
 return ((((fp)->_flags & 0x0040) != 0) ? (-1) : ret);

}
