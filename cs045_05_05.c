#include <stdio.h>
double Fact(double x);
int main(){
    double n,result;
    scanf("%lf",&n);
    result=Fact(n);
    printf("Factorial =%f",result);
    return 0;
}
double Fact(double x){
    double fact=1;
    for (int i=1;i<=x;i++){
        fact*=i;
    }
    return fact;
}