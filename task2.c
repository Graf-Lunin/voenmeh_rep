#include <stdio.h>
#include "io.h"
#include "proc.h"

int main()
{
    int M[15];
    input_array(M, 15);

    if (has_adjacent_equal(M, 15))
        printf("There are adjacent equal elements\n");
    else
        printf("No adjacent equal elements\n");

    return 0;
}
