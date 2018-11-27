/****************************************************
*                                                   *
*         lib_test pour  Test de TP 			*
*													*
*****************************************************
Auteurs : A. Priou
Version : 2012
Fichier : lib_test.h
*****************************************************/
 
/*--------------------------------------------------------------------------------*/                   

void afficher_rectangle (short int larg, short int haut, short int decal );	   
/* affiche à l'écran (à partir de la position courante du curseur) un rectangle de largeur larg, 
   de hauteur haut, et distant de decal par rapport à la gauche de l'écran (decal = 0, 1, ...).
   Avant l'appel de la fonction, le curseur doit être situé en début de ligne. 
   La fonction remet le curseur au début de la ligne suivante. */

void afficher_etoiles  (short int larg, short int decal );	         

void afficher_un_chiffre (short int chiffre, short int nb_tabulations );
		/* affiche le dessin du chiffre, décalé à droite de nb_tabulations tabulations
		(une tabulation = 6 espaces). Le chiffre est toujours seul sur sa ligne. */

/*--------------------------------------------------------------------------------*/

void   initialiser_mes( void );
double lire_mes( void );   				                // valeur renvoyée en Volts
void   afficher_mes( double val_en_V, int numero_mes ) ;             
void   afficher_moy( double valeur_en_V );

/*-------------------------------------------------------------------------------------------*/          

short int lancer_aleatoire (short valeur_min, short valeur_max);
/* fournit une valeur aleatoire comprise entre valeur_min et valeur_max (inclus). 
Exemple : pour simuler un dé à 6 faces, les arguments d'appel doivent valoir 1 et 6. */
						
short int saisir_nb_lancers ( void ) ;   
	/* pour effectuer la saisie au clavier du nb de lancers aleatoires a faire */

void afficher_resultat ( long  nb_lancers , long resultat_calcul ) ;
	/* 1er argument = nb de lancers aleatoires ayant permis d'aboutir a resultat_calcul
	   2eme argument = resultat du calcul a afficher
	 */

/*--------------------------------------------------------------------------------*/                   

short calculer_nb_chiffres ( long int Nbre );
	/* calcule le nombre de chiffres d'un nombre. Exemple : si Nbre=9876, la fonction renvoie 4. */

long int  extraire_un_chiffre ( long int Nbre , long int PositionChiffre ) ;   
		/* renvoie le chiffre de Nbre dont le rang est PositionChiffre 
		(PositionChiffre doit valoir 0 pour obtenir le chiffre des unités, 1 pour les dizaines, etc) 
		Exemple : si Nbre=9876 et PositionChiffre=2, la fonction renvoie 8 */

