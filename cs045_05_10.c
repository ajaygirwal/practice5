#include <stdio.h>
int Int_fabo(int x);
int main(){
    int n;
    scanf("%d",&n);
    Int_fabo(n);
    return 0;
}
int Int_fabo(int x){
    int term1=0,term2=1,new_term;
    printf("%d ",term1);
    printf("%d ",term2);
    for (int i=1;i<x-1;i++){
        new_term=term1+term2;
        printf("%d ",new_term);
        term1=term2;
        term2=new_term;
    }
}