#include<stdio.h>
void bubble_sort(int a[],int n){
    int i,j;
    int temp;
   
    for(j=1;j<n;j++){
        for(i=0;i<n-j;i++){
            
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
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
    bubble_sort(a,n);
    printf("After sorting it will become : ");
    
    for(i=0;i<n;i++){
        printf(" %d \n",a[i]);
    }
}
