#include <stdlib.h>
#include <stdio.h>

#include "sequence.h"

int main(int argc, char *argv[])
{
    struct vector* vec = vnew();

    vadd(vec, 1);
    vprint(vec); 
    vdel(vec);

    return 0;
}