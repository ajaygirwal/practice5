#include <stdio.h>
void Num(int x);
int main(){
    int n;
    scanf("%d",&n);
    Num(n);
    return 0;
}
void Num(int x){
    if ( x%2==0){
        printf("Even Number ");
    }else{
        printf("Odd Number");
    }
}
