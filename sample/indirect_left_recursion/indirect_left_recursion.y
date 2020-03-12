%token A B C D E F
%start a
%%
a
  : b A
  | B
  ;

b
  : c C
  | D
  ;

c
  : a E
  | F
  ;
%%

