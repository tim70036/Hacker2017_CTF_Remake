#include <stdio.h>
#include <memory.h>
#include <stdlib.h>

#define LENGTH 40
int main()
{
    char const plainone[LENGTH] = "NTHU_IS{You_Are_Handsome}";
    char const plaintwo[LENGTH] = "*)(*)SADJL@!_)ASD*)@!*)yj";
    char xor[LENGTH];
    int i;

    for(i=0; i<LENGTH; ++i)
        xor[i] = (char)(plainone[i] ^ plaintwo[i]);
    printf("PlainText One: %s\nPlainText Two: %s\n\none^two: ", plainone, plaintwo);
    for(i=0; i<LENGTH; ++i)
        printf("%02X ", xor[i]);

    printf("\n--------------------------------------------\n");

    char const password[LENGTH] = "Wow_U_Get_The_Password";
    char const key1[LENGTH] = "A*)(QW][asdk;sdxc,.z])";
    char key2[LENGTH];
    for(i=0; i<LENGTH; ++i)
        key2[i] = (char)(password[i] ^ key1[i]);
    printf("password: %s\nkey1: %s\n\npassword^key1: ", password, key1);
    for(i=0; i<LENGTH; ++i)
        printf("%02X ", key2[i]);
    return 0;
}
