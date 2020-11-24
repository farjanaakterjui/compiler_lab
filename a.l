%{
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
extern YYSTYPE yylval;
#include<string.h>
int k=0,s=0,o=0,id=0,l=0,f=0,co=0,dc=0,a=0,b=0;
char ie[100][20],kr[100][20],sr[100][20],or[100][20],ir[100][20],lr[100][20],fr[100][20],cor[100][20],dor[100][20];
void foo(char ar[100][20], int k,char p[20])
{
    int i, j,c=0;
    for( i = 0; i < k; i++)
    {
        for( j = i+1; j < k; j++)
        {

            if(strcmp(ar[i],ar[j])==0)
            {
                break;
            }
        }
        if(j == k)
        {
            printf("%s\t ", ar[i]);
            c++;
        }
    }
    printf("\n total no.distinct of %s = %d\n\n", p,c);
}
%}
tab [ \t]
wh {tab}+
d [0-9]
num {d}*[.]?{d}+

%%
@include[ ]*<[ ]*[a-zA-Z]+.h[ ]*>  {strcpy(lr[k] , yytext);  l++; }
auto|double|int|struct|break|long|switch|case|enum|register|typedef|char|extern|return|union|continue|for|signed|void|do|static|while|default|goto|sizeof|volatile|const|float|short     { strcpy(kr[k] , yytext);k++;} 						
([a-zA-Z])+[ ]*[(]([ ]*([a-zA-Z])*[ ,]*)+[)] {strcpy(fr[f] , yytext);f++;}	
if|else {strcpy(ie[a] , yytext);a++;}				


!![^\n]+ { strcpy(cor[co],yytext);co++;}
"(!-"[^\n]+"-!)" { strcpy(dor[dc],yytext);dc++;}

([a-zA-Z][0-9])+|[a-zA-Z]* {strcpy(ir[id] , yytext);id++;}    

	
\n {return nline; }
{num} {sscanf(yytext,"%lf",&yylval); return number;}
"+" {return plus;}
"-" {return minus;}
"*" {return mul;}
"/" {return divv;}
"(" {return lp;}
")" {return rp;}														
%%

int yywrap()								
{
return 1;
}
int main()
{
yyin = fopen( "tou.txt", "r" );
yylex();
printf("\n\n total no. of FUNCTION = %d\n", f); 
foo(fr,f,"FUNCTION"); 
printf("\n\n total no. of Library = %d\n", l);
foo(lr,l,"Library");
printf("\n\n total no. of KEYWORD = %d\n", k);  
foo(kr,k,"KEYWORD");

printf("\n\n total no. of if else = %d\n", a);
foo(ie,a,"if else");
printf("\n\n total no. of Identifier = %d\n", id);
foo(ir,id,"Identifier");
printf("\n\n total no. of single line comment = %d\n", co);
foo(cor,co,"single line comment");
printf("\n\n total no. of double line comment = %d\n", dc);
foo(dor,dc,"double line comment");
return 0;
}
