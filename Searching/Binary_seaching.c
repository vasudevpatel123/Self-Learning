#include<stdio.h>
int binary_search(int item,int a[],int n){
    int low;
    int high;
    int mid;
    for(low=0,high=n-1;low<=high;){
        mid=(low+high)/2;
        if(a[mid]==item) return mid+1;
        else if(a[mid]<item) low=mid+1;
        else high=mid-1;
    }
    return 0;
}

int main(){
    int key,a[20],n,position;
    printf("Enter the number of element in the array : ");
    scanf("%d",&n);
    printf("Enter the element : ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    printf("Enter the element to search : ");
    scanf("%d",&key);
    position=binary_search(key,a,n);
    if(position==0){
        printf("Element is not present in the array !!");
    }else{
        printf("Element %d is present at location %d of the array !!!",key,position);
    }
    
}
