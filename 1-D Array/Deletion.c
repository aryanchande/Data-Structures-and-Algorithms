#include<stdio.h>
#define MAX 100

int main(){
    int a[MAX],i,n,pos;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the elements of array:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the position to delete: ");
    scanf("%d",&pos);
    for(i=pos-1;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
    printf("Array after deletion:");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}