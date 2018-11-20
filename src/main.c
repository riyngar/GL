//  Copyright (c) 2018 Antoine Tran Tan
//

#include <stdlib.h>
#define SEUIL 18
#define SEUILH 200
#define SEUILB -100

void main(void)
{

	unsigned char i,j,d;
	unsigned char n2;
	unsigned char N=5;
	unsigned char bin [10]={ 2,4,8,16,32,64,128,240,56,19};
	int sat[10]={ rand() - RAND_MAX/2, rand() - RAND_MAX/2, rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2,rand() - RAND_MAX/2};
	int dist[10]={ 10,20,30,40,55,66,77,88,99,100};
    int a[5]={1,5,9,8,11};
    int b[N];
	int mirror[12]={0,2,4,6,8,10,};
	
	
 /*------------------------1----------------------------*/  
  for(i=0; i<10;i++)
   {
	    if (bin[i] > SEUIL)
	
			bin[i] =1;

		else 
			bin[i]=0;
	  }
/*---------------------------2-------------------------------*/	
  for (j=0;j<10;j++)
	{
		if ( sat[j] > SEUILH)
			sat[j] =SEUILH;
		else if (sat[j] <SEUILB)
			sat[j]= SEUILB ;
		else 
		sat[j]=sat[j];	
	}
/*-------------------3-----------------------*/	
	 for(d=0;d<9;d++)
	 {
		 dist[9-d]=dist[9-d]-dist[8-d] ;
	 }
/*-----------------------4-------------------------*/	 
	 for (N=0;N<5;N++)
	 {
		b[N]=a[4-N]; 
	 }
/*-----------------------5-------------------------*/
	 for (n2=0;n2<6;n2++)
	 {
		 mirror[11-n2]=mirror[n2];
	 }
	 
/*---------------------------------------------------*/
int debug=2;	
}
