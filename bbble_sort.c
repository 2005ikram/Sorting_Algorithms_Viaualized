#include<stdio.h>

int BubbleSort(int a[],int n){

    int i,j,temp;
    for (i = 0;i<n ;i++){
        for (j= 0 ;j<n-1;j++){
            if (a[j]>a[j+1]){
                temp = a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
int main(){

    int a[7]={34,23,45,67,89,12,10};
    int n=7; int sorTED;   
    sorTED = BubbleSort(a,n);
    for (int i=0;i<n;i++){
        printf("%d ",a[i]);
       
    }
    return 0;
}
