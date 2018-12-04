#include <userint.h>
#include <ansi_c.h>
#include "stdlib.h"
//  Copyright (c) 2018 Antoine Tran Tan
//



void main(void)
{
  
	char prenom[20];
	char nom[100];
	int annee;
	int actuel;
	int age ;
	char phrase[100];
	//char phrase[100]=" je m'appelle Rakul Iyngarathasan et j'ai 19 ans";
	
	
	
	printf("prenom?\n");
	scanf ("%s",prenom);
	
	printf("nom?\n");
	scanf ("%s",nom);
	
	printf("annee de naissance ?\n");
	scanf ("%d",&annee);
	
	printf("annee actuel?\n");
	scanf ("%d",&actuel);
	
	 age = actuel-annee;
	
	sprintf(phrase," je m'appelle %s %s et j'ai %d ans", prenom,nom,age);
	
	MessagePopup ("identié", phrase);
	
	
	
	int a=0;
}
