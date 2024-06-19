#include <stdio.h>
#include <stdint.h>

typedef union{
    uint32_t value;
    struct __attribute__((packed))
    {
        uint8_t data_1       : 7;
        uint8_t data_2       : 2;
    }field;
}reg_t;

int main()
{
    reg_t data= {};
    data.field.data_1= 0;
    data.field.data_2= 1;
    printf("0x%X\n", data.value);
    return 0;
}
