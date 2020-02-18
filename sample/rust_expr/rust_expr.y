%token <val> BREAK
%token <val> CONTINUE
%token <val> LIT_INTEGER
%token <val> LIT_FLOAT
%token <val> FALSE
%token <val> TRUE

%precedence <val> IDENT

%precedence <val> '?'
%precedence <val> BOX
%nonassoc <val> DOTDOT

%precedence <val> RETURN YIELD

%right <val> '=' SHLEQ SHREQ MINUSEQ ANDEQ OREQ PLUSEQ STAREQ SLASHEQ CARETEQ PERCENTEQ
%left <val> OROR
%left <val> ANDAND
%left <val> EQEQ NE
%left <val> '<' '>' LE GE
%left <val> '|'
%left <val> '^'
%left <val> '&'
%left <val> SHL SHR
%left <val> '+' '-'
%left <val> '*' '/' '%'

%precedence <val> '[' '(' '.'

%type <val> expr vec_expr maybe_exprs maybe_expr exprs lit ident ']' ')' ',' ';'

%start program

%code requires{
 typedef struct node{
   char name[15];
   struct node *children[10];
 }Node;
 void make_dot(Node*);
 void make_arrow(Node*, char*);
 void make_node(Node*, char*, int, ...);
}

%{
  #include <stdio.h>
  #include <string.h>
  #include <stdarg.h>
%}

%union{
  Node *val;
}
%%
program: expr { Node *n = (Node *)malloc(sizeof(Node)); make_node(n, "program", 1, $1); make_dot(n); }
     ;

expr: lit { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 1, $1); }
    | expr '.' LIT_INTEGER { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr '[' maybe_expr ']' { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 4, $1, $2, $3, $4); }
    | expr '(' maybe_exprs ')' { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 4, $1, $2, $3, $4); }
    | '(' maybe_exprs ')' { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | '[' vec_expr ']' { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | CONTINUE { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 1, $1); }
    | CONTINUE ident { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 2, $1, $2); }
    | RETURN expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 2, $1, $2); }
    | BREAK ident { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 2, $1, $2); }
    | BREAK { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 1, $1); }
    | YIELD expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 2, $1, $2); }
    | expr '=' expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr SHLEQ expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr SHREQ expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr MINUSEQ expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr ANDEQ expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr OREQ expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr PLUSEQ expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr STAREQ expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr SLASHEQ expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr CARETEQ expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr PERCENTEQ expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr OROR expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr ANDAND expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr EQEQ expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr NE expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr '<' expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr '>' expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr LE expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr GE expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr '|' expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr '^' expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr '&' expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr SHL expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr SHR expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr '+' expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr '-' expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr '*' expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr '/' expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr '%' expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | expr DOTDOT expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 3, $1, $2, $3); }
    | BOX expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "expr", 2, $1, $2); }
    ;

vec_expr: maybe_exprs { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "vec_expr", 1, $1); }
	| exprs ';' expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "vec_expr", 3, $1, $2, $3); }
	;

maybe_exprs: exprs { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "maybe_exprs", 1, $1); }
           | exprs ',' { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "maybe_exprs", 1, $1); }
           | %empty {
           	   Node *empty = (Node *)malloc(sizeof(Node));
           	   $$ = (Node *)malloc(sizeof(Node)); make_node($$, "maybe_exprs", 0, empty);
           }
           ;

maybe_expr: expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "maybe_expr", 1, $1); }
	  | %empty {
	   Node *empty = (Node *)malloc(sizeof(Node));
	   $$ = (Node *)malloc(sizeof(Node)); make_node($$, "maybe_expr", 0, empty);
	   }
	  ;

exprs: expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "exprs", 1, $1); }
     | exprs ',' expr { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "exprs", 3, $1, $2, $3); }
     ;

lit: LIT_INTEGER { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "lit", 1, $1); }
   | LIT_FLOAT { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "lit", 1, $1); }
   | TRUE { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "lit", 1, $1); }
   | FALSE { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "lit", 1, $1); }
   ;

ident: IDENT { $$ = (Node *)malloc(sizeof(Node)); make_node($$, "ident", 1, $1); }
     ;
%%
void make_node(Node *n, char *name, int num, ...){
  va_list args;
  va_start(args, num);

  strcpy(n -> name, name);
  for(int i=0; i<num; i++)
    n -> children[i] = va_arg(args, Node *);

  va_end(args);
}

void make_dot(Node *n){
  FILE *fp;
  if ((fp = fopen("rust_expr_yacc.dot", "w")) == NULL){
    printf("Failed opening file.\n");
    exit(1);
  }
  fprintf(fp, "digraph tree{\n");
  fprintf(fp, "  graph [layout = dot, ordering = out]\n");
  fclose(fp);

  make_arrow(n, "");
  if ((fp = fopen("rust_expr_yacc.dot", "a+")) == NULL){
      printf("Failed opening file.\n");
      exit(1);
  }
  fprintf(fp, "}\n");
  fclose(fp);
}

void make_arrow(Node *n, char *suffix){
  char *str = (char*)malloc(strlen(suffix)+2);
  FILE *fp;

  for(int i=0; i<10; i++){
    if ((fp = fopen("rust_expr_yacc.dot", "a+")) == NULL){
      printf("Failed opening file.\n");
      exit(1);
    }

    if(n -> children[i] == NULL){
      fclose(fp);
      break;
    }

    sprintf(str, "%s%d", suffix, i);
    if(n->children[i]->name[0] == '\''){
      fprintf(fp, "  \"%s%s\" [label = \"%s\"]\n", n->children[i]->name, str, n->children[i]->name);
      fprintf(fp, "  %s%s -> \"%s%s\" [dir = none]\n", n->name, suffix, n->children[i]->name, str);
    }
    else{
      fprintf(fp, "  %s%s [label = \"%s\"]\n", n->children[i]->name, str, n->children[i]->name);
      fprintf(fp, "  %s%s -> %s%s [dir = none]\n", n->name, suffix, n->children[i]->name, str);
    }
    fclose(fp);

    make_arrow(n -> children[i], str);
  }
}

int yyerror(char const *s){
  printf("syntax error\n");
  exit(1);
}

int main(void){
  yyparse();
  return 0;
}
