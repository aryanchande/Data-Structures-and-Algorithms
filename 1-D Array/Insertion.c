//insertion in an array at a particular element
#include<stdio.h>
#define MAX 100
int main(){
    int a[MAX],n,i,ele,pos;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    printf("Enter the elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to insert:");
    scanf("%d",&ele);
    printf("Enter position:");
    scanf("%d",&pos);
    for(i=n;i>=pos;i--){
        a[i]=a[i-1];
    }
    a[pos-1]=ele;
    n++;
    printf("Array after insertion:");
    for(i=0;i<n;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}