#include <stdio.h>
int int_main(int n);
int main(){
    int n;
    scanf("%d",&n);
    int fact=int_main(n);
    printf("factorial = %d",fact);
    return 0;
}
int int_main(int n){
    if (n==1) return 1;
    return n*int_main(n-1);
}
