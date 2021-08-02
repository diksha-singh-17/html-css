#include<stdio.h>
void printArray(int *A , int n){
    for (int i=0;i<n;i++)
        printf("%d",A[i]);
}
void Bubblesort(int *A , int n){
    for(int i=0; i<n-1;i++){
        for (int j=0 ;j<n-1-i;j++){
            if(A[j]>A[j+1]){
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
}
int main (){
    int A[]={2,3,23,1,24,56,78,87,34};
    int n=9;
    printArray(A,n);
    Bubblesort(A,n);
    PrintArray(A,n);
}