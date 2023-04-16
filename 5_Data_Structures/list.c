#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // get memory from Stack
    //int list[3];
    // get memory from Heap
    // Dynamically allocate an array of size 3:
    int *list = malloc(3 * sizeof(int));

    if (list == NULL)
    {
        return 1;
    }
    // assign 3 numbers to array
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    // time passes
    // we realized that we need array be of size 4:
    // allocate new array of size 4
    int *tmp = malloc(4 * sizeof(int));
    // safety check if there is no more memory, we just clear memory and exit
    if (tmp == NULL)
    {
        free(list);
        return 1;
    }
    // for each element in the original array copy them into new location:
    for (int i = 0; i < 3; i++)
    {
        tmp[i] = list[i];
    }
    // add 4th number to new array
    tmp[3] = 4;

    free(list);

    list = tmp;
    // print new array
    for (int i = 0; i<4; i++)
    {
        printf("%i\n", list[i]);
    }
    free(list);
    return 0;

}