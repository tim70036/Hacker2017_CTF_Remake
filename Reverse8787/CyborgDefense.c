#include <string.h>
#include <stdio.h>

#define LENGTH 40

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
        printf("Password: %s\n", argv[1]);

        char const plainone[LENGTH] = "*)(*)SADJL@!_)ASD*)@!*)yj";
        char const plaintwo[LENGTH] = {0x64, 0x7D, 0x60, 0x7F, 0x76, 0x1A, 0x12, 0x3F, 0x13, 0x23, 0x35, 0x7E, 0x1E, 0x5B, 0x24, 0x0C, 0x0C, 0x4B, 0x47, 0x24, 0x52, 0x45, 0x44, 0x1C, 0x17, 0x00};

        char password[LENGTH];
        char const key1[LENGTH] = "A*)(QW][asdk;sdxc,.z])";
        char const key2[LENGTH] = {0x16, 0x45, 0x5E, 0x77, 0x04, 0x08, 0x1A, 0x3E, 0x15, 0x2C, 0x30, 0x03, 0x5E, 0x2C, 0x34, 0x19, 0x10, 0x5F, 0x59, 0x15, 0x2F, 0x4D, 0x00};
        int i;
        for(i=0; i<LENGTH; ++i)
            password[i] = (char)(key1[i] ^ key2[i]);

        if(strcmp(argv[1], password) != 0)
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
