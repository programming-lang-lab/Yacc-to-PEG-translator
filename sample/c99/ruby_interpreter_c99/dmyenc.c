
int ruby_require_internal(const char *, int);

void
Init_enc(void)
{
    if (ruby_require_internal("enc/encdb.so", (unsigned int)sizeof("enc/encdb.so")-1) == 1) {
 ruby_require_internal("enc/trans/transdb.so", (unsigned int)sizeof("enc/trans/transdb.so")-1);
    }
}
