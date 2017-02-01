#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

#define LENGTH 40
int main()
{
    char const plainone[LENGTH] = "NTHU_IS{LazyShout_is_Handsome}";
    //char const plainone[LENGTH] = {0x7E, 0x7E, 0x7B, 0x3F, 0x3E, 0x62, 0x0C, 0x55, 0x7D, 0x48, 0x25, 0x18, 0x20, 0x03, 0x0B, 0x4E, 0x18, 0x6E, 0x5B, 0x4C, 0x61, 0x29, 0x12, 0x05,0x00, 0x50, 0x2F,0x49,0x3C, 0x55, 0x00};
    char const plaintwo[LENGTH] = "0*3ja+_.1)_askd;l12?>askd#@$Y(";
    char xor[LENGTH];
    int i;

    for(i=0; i<LENGTH; ++i)
        xor[i] = (char)(plainone[i] ^ plaintwo[i]);
    printf("PlainText One: %s\nPlainText Two: %s\n\none^two: ", plainone, plaintwo);
    for(i=0; i<LENGTH; ++i)
        printf("%02X ", xor[i]);
    printf("\n");
    return 0;
}
