//  Copyright (c) 2018 Antoine Tran Tan
//

//  S1n = 1*2*3*...*(n-1)*n
//  S1(n-1) = 1*2*3*...*(n-2)*(n-1)
//  S1n =S1(n-1)*n la formule de récurrence


#include "my_header.h"

int main(void)
{
    unsigned long long int S1 = 1;
    unsigned char n = 2;

    while (n<50)
    {
        S1 = S1 * n;
        n = n + 1;
    }

    return 0;
}