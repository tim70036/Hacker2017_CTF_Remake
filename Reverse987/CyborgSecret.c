#include <string.h>
#include <stdio.h>

#define LENGTH 40

//7E 7E 7B 3F 3E 62 0C 55 7D 48 25 18 20 03 0B 4E 18 6E 5B 4C 61 29 12 05 00 50 2F 49 3C 55 00

void decrypt(const char* a,const char* b, int len)
{
    char flag[LENGTH];
    int i;

    for(i=0; i<LENGTH; ++i)
        flag[i] = (char)(a[i] ^ b[i]);
    printf("%s\n",flag);
}


int main(int argc, char *argv[])
{
    if(argc <= 1)
    {
        puts("Please include a password command line argument.");
    }
    else
    {
        char const plainone[LENGTH] = "0*3ja+_.1)_askd;l12?>askd#@$Y(";
        char const plaintwo[LENGTH] = {0x7E, 0x7E, 0x7B, 0x3F, 0x3E, 0x62, 0x0C, 0x55, 0x7D, 0x48, 0x25, 0x18, 0x20, 0x03, 0x0B, 0x4E, 0x18, 0x6E, 0x5B, 0x4C, 0x61, 0x29, 0x12, 0x05,0x00, 0x50, 0x2F,0x49,0x3C, 0x55, 0x00};

        printf("Password: %s\n", argv[1]);
        if(strcmp(argv[1], "2manyHacks_Debug_Admin_Test") != 0)
        {
             puts("Access Denied");
        }
        else
        {
            puts("Authorization successful.");
            decrypt(plainone, plaintwo, LENGTH);
        }
    }
   return 0;
}
