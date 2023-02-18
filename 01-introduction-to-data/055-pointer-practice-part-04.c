#include <stdio.h>

int main(){
    int value = 0x4D8E6BCA;
    char *cptr = (char*)&value;
    short *sptr = (short*)&value;
    int *iptr = &value;

    /* cptr = 0, sptr = 0, iptr = 0*/
    cptr++; // cptr + (1 * sizeof(char)) 
    sptr++; // sptr + (1 * sizeof(short))
    iptr++; // iptr + (1 * sizeof(int))
                //    0 . 1 .  2 . 3
    int vals[4] = {10, 20, 30, 40};
    short vs[4] = {10, 20, 30, 40};
    // vs[3] // vs + (3 * (sizeof(short))
    //vals[1] // vals + (1 * sizeof(int))
    //vals[2] // vals + (2 * sizeof(int))

    int * vptr = vals;
    // vals[0] = 33;
    vptr++;
    (*vptr) = 500;
    printf("%d\n", vals[0]);
    return 0;
}
