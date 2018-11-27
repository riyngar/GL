#include <ansi_c.h>

/****************************************************
*                                                   *
*         lib_test pour  Test de TP 			*
*													*
*****************************************************
Auteurs : A. Priou
Version : 2012
Fichier : lib_test.h
*****************************************************/

/****************************************************************************/

void afficher_moyenne( double moy )
	{
	printf("\n La moyenne demandee est %lf\n", moy);
	}
	
/****************************************************************************/

short int lancer_aleatoire (short valeur_min, short valeur_max)	   
/* fournit une valeur aleatoire comprise entre valeur_min et valeur_max (inclus). 
Exemple : pour simuler un dé à 6 faces, les arguments d'appel doivent valoir 1 et 6. */
	{
	static short n;
	
	n = valeur_min + (rand())%(valeur_max-valeur_min+1) ;
	return n;
	}
  
/****************************************************************************/

short int saisir_nb_lancers ( void )
	{
	/* définition des variables locales */
	short val ;
	
	/* traitement : */   
	rewind (stdin );				/* vide le tampon de saisie du clavier */
	printf("\n\n Combien de lancers aleatoires voulez-vous faire ? "); 
	scanf("%hd", &val ) ;			/* saisie non blindee ! */
	
	return val ;  
	}
/****************************************************************************/

void afficher_resultat ( long  nb_lancers , long resultat_calcul )
	{
	/* définition des variables locales */
	
	/* traitement : */
	printf("\n Avec %2ld lancers, le resultat du calcul est %ld", nb_lancers, resultat_calcul );
	}
	
 /****************************************************************************/

long extraire_un_chiffre ( long Nbre , long PositionChiffre )   
	{
	/* définition des variables locales */
	long int chiffre, i ;
	
	/* traitement : */    
	for (i=0; i<PositionChiffre ; i++)	   Nbre = Nbre / 10 ;
	
	chiffre = Nbre % 10 ;	

	return chiffre ;  
	}
	
short calculer_nb_chiffres ( long int Nbre )
	{
	short nbChif;
	
	if (Nbre/10 == 0) 	
		nbChif=1 ;
	else
		for (nbChif=0; Nbre!=0 ; nbChif++)	   Nbre = Nbre / 10 ;
	
	return nbChif ;  
	
	}

/****************************************************/                    

void afficher_un_chiffre (short int chiffre, short int nb_tabulations )	   
		/* affiche le dessin du chiffre, décalé à droite de nb_tabulations tabulations
		(une tabulation = 6 espaces). Le chiffre est toujours seul sur sa ligne. */
	{
	static char dessin[50][5]= { " ** ",
							 	 "*  *",
								 "*  *",
								 "*  *",
								 " ** ",				 
	
								 "  * ",
								 " ** ",
								 "* * ",
								 "  * ",         					 
								 " ***", 
								 
								 "*** ",
						 		 "   *",
								 " ** ",
								 "*   ",
								 "****",
								 
								"*** ",
							 	"   *",
								" ** ",
								"   *",
								"*** ",
								
								"*  *",
						 		"*  *",
							 	" ***",
							 	"   *",
							 	"   *" ,
							 	
								 "****",
						 		 "*   ",
								 "*** ",
								 "   *",
								 "*** ",
							 
								 " ***",
						 		 "*   ",
								 "*** ",
								 "*  *",
								 " ** ", 
							 
							    "****",
						 		"   *",
							 	" ** ",
							 	"  * ",
							 	"  * " ,
							 	
							 	" ** ",
							 	"*  *",
								" ** ",
								"*  *",
								" ** ",
								
								" ** ",
							 	"*  *",
								" ***",
								"   *",
								"*** " };				 

	int lig, col;
	
	puts("");
	
	for (lig=chiffre*5;lig<chiffre*5+5;lig++)   
		{
		for (col=0;col<nb_tabulations*6;col++)  putchar(' ');    
		puts( dessin[lig] );
		} 
	}

/****************************************************/                        

void afficher_rectangle (short int larg, short int haut, short int decal )	   
/* affiche à l'écran (à partir de la position courante du curseur) un rectangle de largeur larg, 
   de hauteur haut, et distant de decal par rapport à la gauche de l'écran (decal = 0, 1, ...).
   Avant l'appel de la fonction, le curseur doit être situé en début de ligne. 
   La fonction remet le curseur au début de la ligne suivante. */
	{
	int lig, col;
	
	for (lig=0;lig<haut;lig++)   
		{
		for (col=0;col<decal;col++)  putchar(' ');    
		for (col=0;col<larg;col++)   putchar('*');  
		puts( "" );  
		}

	}

/****************************************************************************/

void afficher_etoiles  (short int larg, short int decal )	   
/* affiche à l'écran (à partir de la position courante du curseur) 
   une ligne horizontale d'étoiles de largeur "larg", 
   qui commence à "decal" positions par rapport à la position initiale (decal = 0, 1, ...).
   Avant l'appel de la fonction, le curseur doit être situé en début de ligne. 
   La fonction remet le curseur au début de la ligne suivante. */
	{
	int col;
	
	for (col=0;col<decal;col++)  putchar(' ');    
	for (col=0;col<larg;col++)   putchar('*');  
	puts( "" );  
	}

/*************************************************************************/

void initialiser_mes( void )
{
	printf("\n Initialisation faite..\n\n");
}

double lire_mes( void )   				// valeur renvoyée en Volts
{
	return (rand()%50/3.0 - 2.8) ;
}

void   afficher_mes( double val_en_V, int numero_mes ) 
{
	printf("\n mesure %3d = %10.3lf",numero_mes, val_en_V );
}

void afficher_moy( double valeur )
{
	printf("\n valeur moyenne = %10.4lf\n", valeur);
}

/*-------------------------------------------------------------------------------------------*/          
