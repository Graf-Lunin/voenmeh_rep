#include <stdio.h>
#include "io.h"
#include "proc.h"

int main()
{
    int A[23];
    input_array(A, 23);

    printf("Source array:\n");
    print_array(A, 23);

    int idx = find_max_negative(A, 23);
    if (idx == -1) {
        printf("No negative elements\n");
        return 0;
    }

    printf("Max negative = %d at index %d\n", A[idx], idx);
    int n = remove_at(A, 23, idx);
    printf("Array after removal:\n");
    print_array(A, n);

    return 0;
}
