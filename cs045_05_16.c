#include <stdio.h>
void game(int n,char s,char h,char d);
int main(){
    int n;
    scanf("%d",&n);
    game(n,'A','B','C');
    return 0;
}
void game(int n,char s,char h,char d){
    if (n==0) return;
    game(n-1,s,d,h);
    printf("Move disk %d from %c to %c ",n,s,d);
    printf("\n");
    game(n-1,h,s,d);
    return;
}