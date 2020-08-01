#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
int main()
{
    int32_t *piBuffer = NULL;
    piBuffer = malloc(0);
    if(piBuffer == NULL)
    {
        //allocation failed exit from the program
        fprintf(stderr,"Out of Memory!\n");
        exit(1);
    }
    *piBuffer = 10;
    printf("#ShivamCDAC %d\n",*piBuffer);
    free(piBuffer);

    return 0;
}