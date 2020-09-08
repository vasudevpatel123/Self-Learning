#include<stdio.h>
void selection_sort(int a[],int n){
    int i,j,temp,pos,small;
    for(i=0;i<n;i++){
        small=a[i];
        pos=i;
        for(j=i+1;j<n;j++){
            if(a[j]<small){
                small=a[j];
                pos=j;
            }
        }
        temp=a[pos];
        a[pos]=a[i];
        a[i]=temp;
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
    selection_sort(a,n);
    printf("After sorting it will become : ");
    
    for(i=0;i<n;i++){
        printf(" %d \n",a[i]);
    }
}
