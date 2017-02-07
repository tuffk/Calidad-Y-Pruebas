#include<stdlib.h>
#include<stdio.h>
#include<cstring>

int main(int argc,char *argv[])
{
    char arr1[9];
    char arr2[9];
    int var =10;

    strcpy(arr1,"aaaaaaaaaa");
    strcpy(arr2,"bbbbbbbbbb");
    strcpy(arr2,argv[1]);

    printf("arr1 esta %p con val %s \n",arr1,arr1);
    printf("arr2 esta %p con val %s \n",arr2,arr2);
    printf("val esta %p con val %d \n",var,var);

    return 0;
}