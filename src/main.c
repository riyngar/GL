
//  Copyright (c) 2018 Antoine Tran Tan
//
 //  S1n = 1*2*3*...*(n-1)*n
//  S1(n-1) = 1*2*3*...*(n-2)*(n-1)
//  S1n =S1(n-1)*n la formule de récurrence

#include <math.h>
#include "stdlib.h"

# define RAND_MAX 32767

 int main(void)
{
    unsigned long long int S1 = 1;
    int  n = 1;
	
	int a =((rand())%10)+1;
    int i = 0 ;
	int som = 0;
	
	int c=1;
	int b=0;
	int yo=0;
		   
  while (S1<9876)
		 
    {
        S1 = S1 + 3*n;
        n = n + 1;
    }
	
	while (i<12)
	{
		som = som +a;
		i++;
		a = ((rand())%10)+1;
	}
	while (b<20)
	{
		if (c%3==0 || c%7==0)
		{
			yo = yo + c;
			 c++;
			 b++;
			}
	else 
		c++;
	}
	
	int debug=0;
     return 0;
}
 