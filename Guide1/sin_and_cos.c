#include<stdio.h>
#include<math.h>

int main( void ){
    int minor, max, gap;
    printf("This program can calculate sin and cos of angles.\n");
    printf("Inform the minor angle: ");
    scanf("%d", &minor);
    printf("and the max angle: ");
    scanf("%d", &max);
    printf("At last, what will be the interval between the angles: ");
    scanf("%d", &gap);

    printf("\n");
    printf("ang     sin           cos\n");
    printf("----  ------------   ------------");
    //Creating a writable file
    FILE * fpointer = fopen("Trigonometry.txt", "w");
    for(int i= minor; i< (max+1); i+=gap){
        double angle = (double) i;
        double s = sin(angle);
        double c = cos(angle);
        fprintf("\n%d     %1.8lf       %1.8lf",i,s,c);
    }
    fclose(fpointer);


    return 0;
}