#include<stdio.h>
#define max 3
int main(){
    char question[3][3]={
        {'a','b','c'},{'d','e','f'},{'g','h','i'}
    };
    for(int i=0;i<3; i++){
        for(int j=0;j<3;j++){
            printf("%c ",question[i][j]);
        }
    }
    

}