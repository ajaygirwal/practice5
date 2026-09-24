#include <stdio.h>
int int_Pal(int x);
int main(){
    int n;
    scanf("%d",&n);
    int_Pal(n);
}
int int_Pal(int x){
    int remain,result=0,dub=x;
    while(x!=0){ 
        remain=x%10;
        result=result*10 + remain;
        x=x/10;
    }
    if (result==dub){
        printf("Palindrome Number ");
    }else{
        printf("Not Palindrome Number ");
    }
}