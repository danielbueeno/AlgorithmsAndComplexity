#include<stdio.h>
#include <math.h>

int main( void ){
    int set;
    printf("How many square roots do you want? ");
    scanf("%d", &set);

    printf("\n");
    printf("Number    Square Root\n");
    printf("------    ------------");

    for(int i= 0;i<set; i++){
        double calculated = sqrt(i);
        printf("\n  %d         %f",i,calculated);
       
    }
    printf("\n");
    return 0;
}