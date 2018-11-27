/*****************************************************************
  Biblioth�que de saisie et d'affichage par fen�tres popup 
                 d'un r�el ou d'un entier
				   2006 JO Klein, (r�v. 2007 A. Priou)
******************************************************************/

#ifndef CVI_GUI_HEADER
#define CVI_GUI_HEADER

/* exemple d'appel :  
		mon_entier = GetLong("Tapez un entier positif SVP : "); 
		DisplayLong( "Voici l'entier que vous avez tap� : ", mon_entier );
				
*/

/* saisie de r�el et d'entier : */
double GetDouble (char * message_a_afficher_avant_saisie);    
long   GetLong (char * message_a_afficher_avant_saisie); 

/* affichage de r�el et d'entier : */  
void   DisplayLong (char * message_a_afficher, long theLong);
void   DisplayDouble ( char * message_a_afficher, double theDouble); 

#endif
