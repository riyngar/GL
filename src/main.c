#include <userint.h>
#include <ansi_c.h>
//  Copyright (c) 2018 Antoine Tran Tan
//



void main(void)
{
    char ligne1[80] = "Nom : triangle_A" ;
	char ligne2[80] = "Nb points : 3" ;
	char ligne3[80] = "Cordonnees: 10 20 30 20 03 40 -1 -1 -1 -1" ;
	
	char ligne4[80] = "Nom: pentagone_B" ;
	char ligne5[80] = "Nb points: 5" ;
	char ligne6[80] = "Cordonnees : 10 20 30 20 30 40 43 53 35 65" ;
	
	char nom_fig[80];
	char message[100];
	long x[5];
	long y[5];
	int nb_pt;
	
	if (ligne3[40]==0)
		  MessagePopup("erreur","une coordonnée manquante");
	
	 sscanf(ligne1," %*s %*s %s ",nom_fig);
	 sscanf(ligne2," %*s %*s %*s %d",&nb_pt);
	 sscanf(ligne3," %*s %*s %d %*s %d %*s %d %*s %d %*s %d %*s ",&x[0],&x[1],&x[2],&x[3],&x[4]); 
	 sscanf(ligne3," %*s %*s %*d %d %*d %d %*d %d %*d %d %*d %d ",&y[0],&y[1],&y[2],&y[3],&y[4]); 
	 
	 sprintf(message,"la %s possede %d sommets",nom_fig,nb_pt);
	 MessagePopup("yolo",message);
	
int a=0;


}
