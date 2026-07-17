#include<stdio.h>

int main(){
    int a[50],i,n,temp,j;
    printf("Enter the no of elements:");
    scanf("%d",&n);
    printf("Enter %d elements:",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    /*Bubble Sort logic*/
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("Sorted array in ascending order:\n");
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}