#include <stdio.h>
int rec_fab(int n);
int main(){
    int n;
    scanf("%d",&n);
    for (int i=0;i<=n;i++){
        printf("%d ",rec_fab(i));
    }
    return 0;
}
int rec_fab(int n){
    if (n==0 ||n==1) return n;
    else return rec_fab(n-1)+rec_fab(n-2);
}