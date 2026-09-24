#include <stdio.h>
int int_rev(int x);
int main(){
    int n;
    scanf("%d",&n);
    int_rev(n);
}
int int_rev(int x){
    int remain,result=0;
    while(x!=0){ 
        remain=x%10;
        result=result*10 + remain;
        x=x/10;
    }
    printf("%d",result);
}
