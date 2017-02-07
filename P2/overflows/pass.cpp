#include<stdlib.h>
#include<stdio.h>
#include<cstring>

int fun(char*);

int main(int argc,char *argv[])
{
    if(fun(argv[1])){
        printf("goot \n");
    }else{
        printf("boo\n");
    }
    return 0;
}

int fun(char* pass)
{
    char p[9];
    strcpy(p,pass);
    if(!strcmp(p,"123456789"))
    {
        return 1;
    }
    return 0;
}