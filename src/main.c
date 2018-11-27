//  Copyright (c) 2018 Antoine Tran Tan
//

//#include "my_header.h"

int main(void)
{
	unsigned char i,k,gain=0;
	unsigned char gagnante[6]= {20,25,1,2,4,6};
	unsigned char joueur[6]={6,5,2,12,4,20};
	
	 for (i=0;i<6;i++)
	 {
		 for (k=0;k<6;k++)
		{
			if(gagnante[i] == joueur[k])
			{
				gain++;
				
			}
		}
		
	 }
	
  int debug=0; 
}
