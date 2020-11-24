%{
	#include<stdio.h>
	#include<string.h>
	#include<stdlib.h>
	#include<math.h>
	#include<conio.h>
	#include "x.tab.h"
%}

alphabet [a-zA-Z]
digit [0-9]
header					"from"[ ]*+[<][^\n]+[.h][ ]*[>]
keyWord					IF|ELSE|LOOP|RETURN|INT|FLOAT|CHAR|SWITCH|CASE|BREAK|DEFAULT|SHOW|REV|P|DE
singleLineComment		!![^\n]*
multipleLineComment		"(!-"[^\n]+"-!)"
fun                     "fun"[ ]*[a-zA-Z]*[ ]*[(]([ ]*([a-zA-Z])*[ ,]*)+[)] 

%%

{digit}+	{ yylval = atoi(yytext); return NUM; }
{alphabet}	    { yylval = *yytext - 'a'; return VAR; }

SWITCH 		   { return SWITCH; }
SHOW 		       { return SHOW; }
CASE   		   { return CASE;  } 
IF 			   { return IF;   }
ELSE 		   { return ELSE; }
BREAK  		   { return BREAK;  }
DEFAULT 	   { return DEFAULT; }
"{" 		   { return START;  }
"}"  		   { return END;	}
LOOP 		   { return LOOP;}
SIN			   {return SIN;}
COS            {return COS;}
TAN            {return TAN;}
LOG			   {return LOG;}
LOG10 		   {return LOG10;}
"fact"         {return FACTORIAL;}
"max"         {return MAXIMUM;}
"min"         {return MINIMUM;}
"gcd"         {return GCD;}
"lcm"         {return LCM;}
"sum"         {return SUM;}
"root"         {return ROOT;}
"prime"         {return PRIME;}
"Triangle"         {return TRI;}
"rev"			{return REV;}
"per"				{return P;}
"binaryToDecimal"  {return DE;}


{singleLineComment}		{printf("singleLineComment found : %s\n",yytext);}
{multipleLineComment}	{printf("multipleLineComment found : %s\n",yytext);}
{header}  				{printf("header found : %s\n",yytext);}
{fun}                   {printf("function found : %s\n",yytext);}
[-+/*<>=,():;%^]     {yylval = yytext[0];	return *yytext;	}
INT       			 {return INT;}
CHAR 		         {return CHAR;}
FLOAT 			 	{return FLOAT;}
"startup"	   { return MAIN; }
[ ]*	    			{}
[\n]*					{}
[\t]*					{}
.						{printf("%s --> invalid\n",yytext);}


%%
int yywrap()
{
	return 1;
}

int main()
{
	freopen("input.txt","r",stdin);
	freopen("out2.txt","w",stdout);
	yyparse();
    
	return 0;
}