#include<stdio.h>
int bubble_sort(int a[],int n){
    int i,j;
    int temp;
    int count=0;
    for(j=1;j<n;j++){
        for(i=0;i<n-j;i++){
            count++;
            if(a[i]>a[i+1]){
                temp=a[i];
                a[i]=a[i+1];
                a[i+1]=temp;
            }
        }
    }
    return count;
}
 
int main(){
    int a[20],i,n,t;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    t=bubble_sort(a,n);
    printf("After sorting it will become : ");
    printf("\n %d \n",t);
    for(i=0;i<n;i++){
        printf(" %d \n",a[i]);
    }
}
