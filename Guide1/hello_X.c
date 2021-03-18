#include<stdio.h>

int main( void ){
    char name[40];

    printf("What is your name? ");
    scanf("%s", name);

    printf("Hello, %s!\n", name);


    return 0;
}