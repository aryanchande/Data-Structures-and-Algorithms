#include<stdio.h>

int main(){
    int a[100],i,n,ele;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter the elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search :");
    scanf("%d",&ele);
    for(i=0;i<n;i++){
        if(a[i]==ele){
        printf("Element found at position %d",i+1);
        return 0;
        }
    }
    printf("Element not found.");
    return 0;
}