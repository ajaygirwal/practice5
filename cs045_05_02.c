#include <stdio.h>
double  sqa(double  x);
int main(){
    double a;
    double result;
    scanf("%lf",&a);
    result=sqa(a);
    printf("Square = %f",result);
    return 0;
}
double sqa(double x){
    return x * x;
}