
pass [a-zA-Z]
p {pass}*[k]{pass}*[u]{pass}*[e]{pass}* 

%%
p {printf("valid\n");}
 															
[^p] {printf("invalid\n");}

%%

int yywrap()
{
	return 1;
}

int main()
{
	
           yyin = fopen( "m1.c", "r" );
        
   
	yylex();
	return 0;
}
