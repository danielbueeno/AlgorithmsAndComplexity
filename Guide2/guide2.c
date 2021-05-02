#include <stdio.h>

unsigned int f1(unsigned int n){
    unsigned int i, j, r = 0;
    for(i = 1; i<=n; i++){
        for(j =1;j<=n;j++){
            r += 1;
        }
    }
    return r;
}

unsigned int f2( unsigned int n){
    unsigned int i, j, r = 0; 
    for (i = 1; i <= n; i++) 
        for (j = 1; j <= i; j++) 
            r += 1; 
    return r; 
}

unsigned int f3(unsigned int n){
    unsigned int i, j, r = 0; 
    for (i = 1; i <= n; i++) 
        for (j = 1; j <= n; j++) 
            r += j; 
    return r; 
}

unsigned int f4(unsigned int n){
    unsigned int i, j, r = 0; 
    for (i = 1; i <= n; i++) 
        for (j = i; j >= 1; j /= 10) 
            r += i; 
    return r; 
}

void main(){
    for(int i = 1; i<=15; i++){
        printf("f1(%d): %d; Number of interations: %d\n", (i),f1(i), f1(i));
    }

    for(int i = 1; i<=15; i++){
        printf("f2(%d): %d; Number of interations: %d\n", (i),f2(i), f2(i));
    }

    for(int i = 1; i<=15; i++){
        printf("f3(%d): %d; Number of interations: %d\n", (i),f3(i), f1(i));
    }

     for(int i = 1; i<=15; i++){
        printf("f4(%d): %d; Number of interations: %d\n", (i),f4(i), f2(i));
    }


    

    

}