#include <stdio.h>
int int_gcd(int x,int y);
int main(){
    int n1,n2,result;
    scanf("%d %d",&n1,&n2);
    result=int_gcd(n1,n2);
    return 0;
}
int int_gcd(int x,int y){
    int gcd=0;
    for (int i=1;i<x && i<y;i++){
        if(x%i==0 && y%i==0){
            gcd=i;
        }
    }
    printf("GCD = %d ",gcd);
}
