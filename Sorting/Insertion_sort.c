#include<stdio.h>

void insertion_sort(int a[],int n){
    int i,j,key;
    for(i=0;i<n;i++){
        key=a[i];
        j=i-1;
        while(j>=0 && key<a[j]){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
}
 
int main(){
    int a[20],i,n,t;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    insertion_sort(a,n);
    printf("After sorting it will become : ");
    
    for(i=0;i<n;i++){
        printf(" %d \n",a[i]);
    }
}
