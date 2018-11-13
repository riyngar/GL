//  Copyright (c) 2018 Antoine Tran Tan
//

/*---------plage de valeurs type  -----------*/
// char    <  short int       <     long
// 1octect |  2 octets(16bit) |  4octets
// unsigned short int [0(2^16-1)]         




#include "my_header.h"
#include <math.h>

#define ECART 1e-10

int main(void)
{
    double a = 1.0, b = 2.0, c = 3.0;
    double delta;
    unsigned char nb_solutions;

    delta = b*b - 4.0 * a *c;

    if ( fabs(delta) <  ECART )
        nb_solutions = 1;
    else if( delta > 0)
        nb_solutions = 2;
    else
        nb_solutions = 0;

    return 0;
}