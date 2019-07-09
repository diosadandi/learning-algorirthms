#include<stdio.h>
#include<stdlib.h>


int print_array(int *arr,int len){
    for(int i=0;i<len;i++){
        printf("%d ",*(arr + i));// Approach 2 using pointer indexing -- display output
    }
    return 0;
}

int main(){
    int *arr;
    int len;
    // printf("Enter array length: ");
    scanf("%d",&len);    
    arr = (int*)malloc(len * sizeof(int*));//Dynamic memory allocation
    for(int i=0;i<len;i++){
        scanf("%d",&arr[i]);//Approach 1 using the regular indexing -- reading input
    }
    print_array(arr,len);
    return 0;
}