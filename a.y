%{ 
#define YYSTYPE double
#include<malloc.h>
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int yylex();
%}

%token nline number plus minus mul divv lp rp 
%left plus minus
%left mul divv
%start input

%%
input: 
|input line
;
line: nline
| exp nline {printf("= %g\n",$1);}
;
exp: number {$$=$1;}
|exp plus exp {$$=$1+$3;}
|exp minus exp {$$=$1-$3;}
|exp mul exp {$$=$1*$3;}
|exp divv exp {$$=$1/$3;}
|lp exp rp {$$=$2;}
;
%%

int yyerror(char *s){
printf("%s\n",s);
return 0;
}

int main(void)
{
yyparse();
exit(0);
}