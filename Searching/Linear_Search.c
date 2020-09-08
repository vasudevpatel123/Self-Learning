#include<stdio.h>
int linear_search(int key,int a[],int n){
    int i;
    for(i=0;i<n;i++){
        if(a[i]==key){
            return i+1;
        }
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
    position=linear_search(key,a,n);
    if(position==0){
        printf("Element is not present in the array !!");
    }else{
        printf("Element %d is present at location %d of the array !!!",key,position);
    }
    
}
