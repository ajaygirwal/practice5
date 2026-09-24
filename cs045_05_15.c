#include <stdio.h>
int matrix(int n,int arr1[][n],int arr2[][n]);
int main(){
    int n;
    scanf("%d",&n);
    int arr1[n][n];
    int arr2[n][n];
    printf("Input :\n");
    printf("A :\n");
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr1[i][j]);
        }
    }
    printf("B :\n");
    for (int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int ans=matrix(n,arr1,arr2);
    return 0;
}
int matrix(int n,int arr1[][n],int arr2[][n]){
    int arr3[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            arr3[i][j]=arr1[i][j]+arr2[i][j];
        }
    }
    printf("Output:\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr3[i][j]);
        }
        printf("\n");
    }
}