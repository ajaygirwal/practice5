#include <stdio.h>
#include <math.h>
int Power(int n1 , int n2);
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    Power(n1,n2);
    return 0;
}
int Power(int n1,int n2){
    int fuct=1;
    for (int i=1;i<=n2;i++){
        fuct*=n1;
    }
    printf("%d",fuct);
}