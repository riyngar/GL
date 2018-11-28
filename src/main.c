//  Copyright (c) 2018 Antoine Tran Tan
//

#include "TP_lib_suite.h"

/*int main(void)
{
	unsigned char i,j,gain=0;
	
	 void initialiserTirage();
	short tirerNumero();
	unsigned char gagnante[6]= {20,25,1,2,4,6};
	unsigned char joueur[6]={6,5,2,12,4,20};

	 
	
	
	
	for (i=0;i<6;i++)
	 {
		 for (j=0;j<6;j++)
		{
			if(gagnante[i] == joueur[j])
			{
				gain++;
				
			}
		}
		
	 }
	
  int debug=0; 
}*/
int main(void)
{
	initialiserTirage(); 
	short joueur[6]={2,4,6,8,10,12};
					 
	short gagnante[6]={tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero(),tirerNumero()};
	short i=0,j=0,cpt=0,gain=0,n=0;

	
	
	while(n<100)
	for(n=0;n<100;n++)
	{
		
		n++;
	
		
		for(i=0;i<6;i++)
		{
			for(j=0;j<6;j++)
				{
					if(joueur[j]==gagnante[i])
						cpt++;
				}
					if(cpt>gain)
						if(gain<cpt)
						gain=cpt;
		}
		
	  cpt=0; 	
	}
	   	int debug=2; 
}