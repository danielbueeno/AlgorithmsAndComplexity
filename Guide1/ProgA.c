#include<stdio.h>

//function declaration
void printArray(char s, int a[]);
void cumSum(int a[],int b[]);

int main(void){
    int a [] = {31,28,31,30,31,30,31,31,30,31,30,31};
    printf("\n");
    printArray('a',a);
    
    printf("\n");
    int b [12];
    cumSum(a,b);
    printArray('b',b);

    return 0;
}

void printArray(char s, int a[] ){
    char x = s;
    printf("%c :\n",x);
   
    for (int i = 0; i < 12; i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
    
}

void cumSum(int a[], int b[]){
    int c = 0;
    for (int i = 0; i < 12; i++)
    {
        c += a[i];
        b[i] = c;
    }
    
}
