#include <ansi_c.h>
#include <userint.h>
#include "TP_lib.h"
#include "cvi_gui.h"

void main(void)
{
	short resultat, i=0;
	while(i<10)
	{
		resultat= LancerDe();
		 printf("numero %d ",resultat) ;
		i++;
	}
}
//yo30