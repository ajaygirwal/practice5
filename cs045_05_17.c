#include <stdio.h>
int search(int arr[],int key,int l,int r);
void bubble(int arr[], int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Array:");
    for (int i=1;i<=n;i++){
        scanf("%d",&arr[i]);
    }
    int key;
    printf("Key =" );
    scanf("%d",&key);
    bubble(arr,n);
    int index;
    index = search(arr,key,1,n-1);
    printf("Element found at position : %d",index);
    return 0;
}
void bubble(int arr[],int n){
    for (int i=1;i<=n;i++){
        for (int j=1;j<=n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
int  search(int arr[],int key,int l,int r){
    int mid;
    mid = l+(r-l)/2;
    if (l>r) return -1;
    if (arr[mid]==key){
        return mid;
    }else if(arr[mid]>key){
        return search(arr,key,l,mid-1);
    }else{
        return search(arr,key,mid+1,r);
    }
    
}