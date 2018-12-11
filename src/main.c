#include <ansi_c.h>
#include <stdint.h>
//  Copyright (c) 2018 Antoine Tran Tan
//



int main(void)
{
  int32_t R ;
  uint32_t a;
  uint32_t b;
  int32_t c;
  
  
    printf(" noir marron  rouge orange jaune vert bleu violet gris blanc\n") ;
	printf("  0     1       2     3      4     5    6    7      8    9   \n") ;
	
	
  	printf("variable a ?\n");
	scanf ("%u",&a);
	
	printf("variable b ?\n");
	scanf ("%u",&b);
	
	printf("variable c ?\n");
	scanf ("%d",&c);

		if (0<=c && c<=7)
		{ R=( 10 * a + b)*pow(10,c);
			printf(" la valeur de resistance est de %d",R);}
		else 
		{R=-1;
			 printf(" vous avez faux %d",R);}

 return 0;
}
