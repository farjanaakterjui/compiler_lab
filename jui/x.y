%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<math.h>
	int data[100];
	int yylex();
	int  defn = 0;
	int cnt[1000] = {0};

%}

/* bison declarations */

%token NUM VAR IF ELSE MAIN INT FLOAT CHAR START END SWITCH CASE DEFAULT BREAK LOOP SHOW SIN COS TAN LOG LOG10 FACTORIAL MAXIMUM GCD LCM MINIMUM SUM ROOT PRIME TRI REV P DE
%nonassoc IFX
%nonassoc ELSE
%nonassoc SWITCH
%nonassoc CASE
%nonassoc DEFAULT
%left '<' '>'
%left '+' '-'
%left '*' '/'

/* Grammar rules and actions follow.  */

%%

program: MAIN ':' START go END
	 ;

go: /* NULL */

	| go stm
	;

stm: ';'			
	| declaration ';'		{ printf("Declaration\n"); }

	| exp ';' 			{   printf("value of exp: %d\n", $1); $$=$1;}
	
	| VAR '=' exp ';' { 
							data[$1] = $3; 
							printf("Value of the variable: %d\t\n",$3);
							$$=$3;
						} 

    |FACTORIAL '(' exp ')' ';'  {
	         int f=1;
			for(int i=$3; i>=2; i--)
			{
				f*=i;			
			}
			$$=f;
			printf("Value of the Factorial: %d\n",$$);
	     }
	|SUM '(' exp ',' exp ')' ';'  {
	         int f=0;
			for(int i=$3; i<=$5; i++)
			{
				f+=i;			
			}
			$$=f;
			printf("Summation bewteen %d and %d is: %d\n", $3, $5,$$);
	     }
	| MAXIMUM '(' exp ',' exp ')' ';' {
			   if($3>$5) $$=$3;
			   else $$ = $5;
			   printf("Maximum of the two numbers = %d\n",$$);
			}
	| MINIMUM '(' exp ',' exp ')' ';' {
			   if($3<$5) $$=$3;
			   else $$ = $5;
			   printf("Minimum of the two numbers = %d\n",$$);
			}
	|GCD '(' exp ',' exp ')' ';'{
      int gcd;
	    for(int i=1; i <= $3 && i <=$5 ; ++i)
    {
        
        if($3%i==0 && $5%i==0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d\n", $3, $5, gcd);
	}
	|LCM '(' exp ',' exp ')' ';'{
      int gcd,lcm;
	    for(int i=1; i <= $3 && i <=$5 ; ++i)
    {
        
        if($3%i==0 && $5%i==0)
            gcd = i;
    }
    lcm = ($3 * $5) / gcd;    
    printf("L.C.M of %d and %d is %d\n", $3, $5, lcm);
	}
            
	| LOOP '(' NUM ':' NUM ')' START stm END {
	                                int i;
	                                for(i=$3 ; i<=$5 ; i++) {printf("value of the loop: %d exp value: %d\n", i,$8);}									
				               }
	| SWITCH '(' VAR ')' START B  END

	| IF '(' exp ')' START exp ';' END %prec IFX {
								if($3){
									printf("\nvalue of exp in IF: %d\n",$6);
								}
								else{
									printf("condition value zero in IF block\n");
								}
							}

	| IF '(' exp ')' START exp ';' END ELSE START exp ';' END {
								if($3){
									printf("value of exp in IF: %d\n",$6);
								}
								else{
									printf("value of exp in ELSE: %d\n",$11);
								}
							}
	| SHOW '(' exp ')' ';' {printf("Print exp %d\n",$3);}
	| DE '(' exp ')' ';' {int binaryToDecimal(long binarynum)
{
    int decimalnum = 0, temp = 0, remainder;
    while (binarynum!=0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}
printf("Equivalent decimal number of %d is: %d\n",$3, binaryToDecimal($3));
}
	| P '(' exp ','exp ')' ';' {int fact(int n) 
{ 
    if (n <= 1) 
        return 1; 
    return n*fact(n-1); 
} 
  
int nPr(int n, int r) 
{ 
    return fact(n)/fact(n-r); 
} 
 printf("%dP%d is %d\n", $3, $5, nPr($3, $5)); 
  }
	|REV '(' exp ')' ';' {int r=0; while ($3 != 0){r = r * 10; r = r + $3%10;  $3 = $3/10;}printf("Reverse of the number = %d\n", r);}
	| TRI exp ';'{
	int i ,j,k=0;
	printf("\nTriangle of %d:\n",$2);
	    for (i=1; i<=$2; ++i,k=0) {
        for (j=1; j<=$2-i; ++j)
        { printf("  "); }
        while (k!=2*i-1) {
            printf("* ");
            ++k;
        }
        printf("\n");
    }    
      printf("\n");
	}
	;

	
B   : C
	| C D
    ;
C   : C C
	| CASE NUM ':' SHOW '(' exp ')' ';' {printf("Print Switch expression value %d\n",$6); }
	;
D   : DEFAULT ':' SHOW '(' exp ')' ';'  {printf("Print Switch expression value %d\n",$5); }
	
declaration : TYPE ID1   
             ;


TYPE : INT   
     | FLOAT  
     | CHAR   
     ;



ID1 : ID1 ',' VAR {
            if(cnt[$3]==0)
			{
			    cnt[$3]++;
			}
			else
			{
			   defn = 1;
			   printf("Variable %c can't be declared twice\n",$3+'a');
			}
			   
         } 
    |VAR  {
	      if(cnt[$1]==0)
			{
			    cnt[$1]++;
			}
			else
			{
			   defn = 1;
			   printf("Variable %c can't be declared twice\n",$1+'a');
			}
	}	 
    ;

exp: NUM					{ $$ = $1; 	}

	| VAR						{ $$ = data[$1]; }
	
	| exp '+' exp	{ $$ = $1 + $3; }

	| exp '-' exp	{ $$ = $1 - $3; }

	| exp '*' exp	{ $$ = $1 * $3; }

	| exp '/' exp	{ if($3){
				     					$$ = $1 / $3;
				  					}
				  					else{
										$$ = 0;
										printf("\ndivision by zero\t");
				  					} 	
				    			}
	| exp '%' exp	{ if($3){
				     					$$ = $1 % $3;
				  					}
				  					else{
										$$ = 0;
										printf("\nMOD by zero\t");
				  					} 	
				    			}
	| exp '^' exp	{ $$ = pow($1 , $3);}
	| exp '<' exp	{ $$ = $1 < $3; }
	
	| exp '>' exp	{ $$ = $1 > $3; }

	| '(' exp ')'		{ $$ = $2;	}
	|ROOT '(' exp ')'		{ $$ = sqrt($3);
							 printf("Square root of the number = %d\n",$$);}
	|PRIME '(' exp ')'		{ 
	    int n, i, flag = 0;
	for (i = 2; i < $3 / 2; ++i) {
        if ($3 % i == 0) {
            flag = 1;
            break;
        }
    }
    if ($3 == 1) {
        printf("1 is neither prime nor composite.");
    }
    else {
        if (flag == 0)
            printf("%d is a prime number.\n", $3);
        else
            printf("%d is not a prime number.\n", $3);}

	 }
	| SIN exp 			{printf("Value of Sin(%d) is %lf\n",$2,sin($2*3.1416/180)); }

    | COS exp 			{printf("Value of Cos(%d) is %lf\n",$2,cos($2*3.1416/180)); }

    | TAN exp 			{printf("Value of Tan(%d) is %lf\n",$2,tan($2*3.1416/180)); }

    | LOG10 exp 			{printf("Value of Log10(%d) is %lf\n",$2,(log($2*1.0)/log(10.0))); }
	| LOG exp 			{printf("Value of Log(%d) is %lf\n",$2,(log($2)));}
	;
%%


yyerror(char *s){
	printf( "%s\n", s);
}

