#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string.h>

void (*m0) ();
char* flag;
char const key1[100] = "*)(@SAJA;z/c,/qwe,/axc;as,d;)";
int key2[100] = {
    81
    ,96
    ,92
    ,31
    ,58
    ,50
    ,21
    ,17
    ,90
    ,3
    ,112
    ,39
    ,77
    ,86
    ,46
    ,58
    ,10
    ,88
    ,71
    ,4
    ,10
    ,60
    ,125
    ,20
    ,16
    ,71
    ,1
    ,73
    ,84
};

void nothing()
{
    int a = 1;
    a++;
}

void dont_call_me()
{
    printf("hi.\n");
}

void real_help()
{
    printf("Leonardo De Pisa? Who's that–The next president?\n");
}

void help()
{
    int n = 8787;
    int nprime[n];
    for(int i=0 ; i<n ; i++)    nprime[i] = 0;

    for(int i=2 ; i<n ; i++)
        if(nprime[i] == 0)
            for(int j=i*i ; j<n ; j += i)
                nprime[j] = 1;


    (*m0)();
    printf("We didn't deserve Bernie.\n");
}

void c1()
{
    int n = 0;
    for(int i=0 ; i<101 ; i++)  n++;
    flag = new char[n];
    for(int i=0 ; i<n ; i++)    flag[i] = 0;
}

void c1_()
{
    flag[0] = 0x2e + 0x20;
    flag[1] = 0x50 + 0x04;
    flag[2] = 0x30 + 0x18;
    flag[3] = 0x10 + 0x45;
    flag[4] = 0x10 + 0x20 + 0x20 + 0x0f;
    flag[5] = 0x42 + 0x07;
    flag[6] = 0x51 + 0x02;
}

void c2()
{
    flag[7] = 81;
    flag[8] = 96;
    flag[9] = 92;
    flag[10] = 31;
}

void c3()
{
    for(int i=11, j=4 ; i < 20 ; i++, j++)
        flag[i] = key2[j];
}

void c5()
{
    for(int i=20, j=13 ; i < 36 ; i++, j++)
        flag[i] = key2[j];
}

void c8()
{
    (*m0)();
    for(int i=7 ; i < 36 ; i++)
        flag[i] = flag[i] ^ key1[i-7];
    printf("%s\n",flag);
}

void c55()
{
    char const dummy[30] = "No one can break this.";
    while(strlen(dummy) < 100)
    {
        char yummy[30];
        int i;
        for(i=0 ; i<30 ; i++)   yummy[i] = dummy[i];
    }
    m0 = &dont_call_me;
}

int main()
{
    puts("Poor Bernie.");
    return 0;
}
