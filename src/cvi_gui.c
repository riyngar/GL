/*****************************************************************
  Bibliothèque de saisie et d'affichage par fenêtres popup 
                 d'un réel ou d'un entier
				   2006 JO Klein
******************************************************************/

#include <userint.h>
#include <ansi_c.h>

double GetDouble (char * message){
	double theDouble;
	char string [21];
	char * messageStandard =  "Entrez un nombre :";
	
	if (message == NULL || strlen (message)>50) 
		 message = messageStandard; 
	do PromptPopup ("GetDouble", message, string, 20);
	while (sscanf(string, "%lf", &theDouble)!=1); 
	return theDouble; 
}

long GetLong (char * message){
	long theLong;
	char string [21];
	char * messageStandard =  "Entrez un nombre :";
	
	if (message == NULL || strlen (message)>50) 
		 message = messageStandard; 
	do PromptPopup ("GetLong", message, string, 20);
	while (sscanf(string, "%ld", &theLong)!=1); 
	return theLong; 
}

void DisplayLong (char * message, long theLong){
	char string [200];
 	char * messageStandard =  "Valeur =";
 	
	if (message == NULL || strlen (message)>50) 
		 message = messageStandard; 
 	sprintf(string,"%s %ld",message,theLong)  ;
	MessagePopup ("DisplayLong", string);
}

void DisplayDouble ( char * message, double theDouble){
 	char string [200];
 	char * messageStandard =  "Valeur =";
 	
	if (message == NULL || strlen (message)>50) 
		 message = messageStandard; 
 	sprintf(string,"%s %lf",message,theDouble)  ;
	MessagePopup ("DisplayDouble", string);
}

