#include <stdio.h>
#include <stdint.h>

int main()
{
    struct bitfields
    {
        int32_t b1: 2;
        int32_t b2: 4;
        int32_t b3: 4;
        int32_t b4: 3;
    }bit = {2,3,8,7};
    
        
    
    printf("%d %d %d %d",bit.b1,bit.b2,bit.b3,bit.b4);

    return 0;
}
