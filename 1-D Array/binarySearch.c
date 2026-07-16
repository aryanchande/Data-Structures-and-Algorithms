#include<stdio.h>

int main(){
    int a[100],i,n,low,high,mid,ele;
    printf("Enter the no of elements :");
    scanf("%d",&n);
    printf("Enter elements :");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);

    }
    printf("Enter the element to search :");
    scanf("%d",&ele);
    low=0,high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if(a[mid]==ele){
            printf("Element found at positon %d",mid+1);
            return 0;
        }
        else if(a[i]<mid){
            high=mid-1;
        }
        else low=mid+1;
    }
    printf("Elemnt not found.");

    return 0;
}