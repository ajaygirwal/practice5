#include <stdio.h>
int Int_prime(int x);
int main(){
    int n;
    scanf("%d",&n);
    Int_prime(n);
    return 0;
}
int Int_prime(int x){
    int prime=1;
    for (int i=2;i<x;i++){
        if(x%i==0){
            prime=0;
            break;
        }
    }
    if (prime==1){
        printf("Prime Number");
    }else{
        printf("Not Prime Number");
    }
}
