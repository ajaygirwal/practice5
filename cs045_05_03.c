#include <stdio.h>
int fuc_max(int x , int y);
int main(){
    int a,b,max;
    scanf("%d %d",&a,&b);
    max=fuc_max(a,b);
    return 0;
}
int fuc_max(int x,int y){
    if ( x > y){
        printf("Maximum = %d",x);
    }else{
        printf("Maximum = %d",y);
    }
    return 0;
}