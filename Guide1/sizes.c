#include<stdio.h>

int main(void){
    printf("Size of  C data types:\n");
    printf("void *----- %ld\n", sizeof(void *));
    printf("void ------ %ld\n", sizeof(void));
    printf("int ------- %ld\n", sizeof(int));
    printf("char ------ %ld\n", sizeof(char));
    printf("short ----- %ld\n", sizeof(short));
    printf("long ------ %ld\n", sizeof(long));
    printf("long long - %ld\n", sizeof(long long));
    printf("float ----- %ld\n", sizeof(float));
    printf("double----- %ld\n", sizeof(double));


    return 0;
}