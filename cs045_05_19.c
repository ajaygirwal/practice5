#include <stdio.h>
void balance(int deposite,int withdraw);
int main(){
    int deposit,withdraw;
    printf("Deposit = ");
    scanf("%d",&deposit);
    printf("Withdraw = ");
    scanf("%d",&withdraw);
    balance(deposit,withdraw);
    return 0;
}
void balance(int deposite ,int withdraw){
    int remaining;
    if (withdraw >deposite){
        printf("Not proper balance");
    }else{
        remaining=deposite-withdraw;
        printf("Remaining Balance = %d",remaining);
    }

}