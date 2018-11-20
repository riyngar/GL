//  Copyright (c) 2018 Antoine Tran Tan
//

#include <stdlib.h>
#define SEUIL 18
#define SEUILH 200
#define SEUILB -100

void main(void)
{

	char i,j;
   unsigned char bin [10]={ 2,4,8,16,32,64,128,240,56,19};
   int sat[10]={rand(),rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand(), rand()};
   
   for(i=0; i<10;i++)
   {
    if (bin[i] > SEUIL)
	
		bin[i] =1;

	else 
		bin[i]=0;
  }
	for (j=0;j<10;j++)
	{
	if ( sat[j] > SEUILH)
		sat[j] =SEUILH;
	else if (sat[j] <SEUILB)
		sat[j]= SEUILB ;
	else 
	sat[j]=sat[j];	
	}
		
int debug=0;	
}
