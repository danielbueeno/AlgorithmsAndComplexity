#include <stdio.h>
#include <math.h>

int numberOfMultiplications = 0;
int recursiveSolution(int n){
    if(n <= 1){
        return n;
    }else{
        numberOfMultiplications += 2;
        return 3 * recursiveSolution(n-1) * recursiveSolution(n-2);
    }
}

int iterativeSolution(int n){
    int value = n;
    int back2 = 0;
    int back = 1;

    for(int i = 0;i<= n; i++){
        numberOfMultiplications += 2;
        value = (3 * iterativeSolution(back))+(2*iterativeSolution(back2));
        back2 = back;
        back = value;
    }
    return back;
}
double recurseEquation(int n){
    double r = sqrt(17);
    double  x = (double)pow((1/2)*(3 + r),n);
    double  y = (double)pow((1/2)*(3 - r),n);

    numberOfMultiplications += (n+1);

    double result = (x -y)/r;

}

double exponential(int n){
    double c1 = 0.24253562503633297352;
    double c2 = 1.27019663313689157536;

    numberOfMultiplications += (1+(int)(c2*n));

    return round(c1 * exp(c2*n) );
}

int main(){
    printf("n value: ");
	int n = 0;
	scanf("%d", &n);

    printf("Recursive Solution\n\n");
    for(int i = 0; i <=n; i++){
        printf("n: %d ; f(n): %d ; numberMult: %d\n",i,recursiveSolution(i),numberOfMultiplications);
    }
    printf("\n");

    printf("Iterative Solution\n\n");
    for (int i = 0; i < n; i++){
        numberOfMultiplications = 0;
        printf("n: %d ; f(n): %d ; numberMult: %d\n",i,iterativeSolution(i),numberOfMultiplications);
    }
    printf("\n");
    
    printf("Recursive Equation\n\n");
    for (int i = 0; i < n; i++){
        numberOfMultiplications = 0;
        printf("n: %d ; f(n): %f ; numberMult: %d\n",i,recurseEquation(i),numberOfMultiplications);
    }
    printf("\n");
    
    printf("Exponential Function\n\n");
    for (int i = 0; i < n; i++){
        numberOfMultiplications = 0;
        printf("n: %d ; f(n): %f ; numberMult: %d\n",i,exponential(i),numberOfMultiplications);
    }

    
}