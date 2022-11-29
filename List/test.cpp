#include<stdio.h>
#include<iostream>
#include<string.h>
using namespace std;

template<class T>
void swapa(T& a, T& b){
    T tmp = a;
    a = b;
    b = tmp;
}
void insert(int *arr, int *val);
int main(){
    int digit[10]={
        1,2,3,4,5,6,7,8,9,10
    };
    int arr[10];
    int *p = arr;
    insert(arr, digit);
    for(int i=0; i<10; i++){
        cout<<*(p+i)<<" ";
    }
}

void insert(int *arr, int *val){
    int i=0;
    int j=0;
    for(int *p=arr,*q=val; i<10; i++, j++){
        *(p+i)=*(q+j);
    }
}

void deleteOdd(int *arr){
    
}

    

