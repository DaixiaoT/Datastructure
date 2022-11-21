#include<stdio.h>
#define max 5
int main(){
    char question[max][max]={
        {'t','h','i','s'},
		{'w','a','t','s'},
		{'o','a','h','g'},
		{'f','g','d','t'}
    };//define a question
    for(int i=0;i<max; i++){//print the question
        for(int j=0;j<max;j++){
            printf("%c ",question[i][j]);
        }
		printf("\n");
    }
	char dict[max][max]={
		"that","fat","two","this"
	};//define a dictionary
	for(int i=0; i<max; i++){//print the dictionary
		printf("%s\n",dict[i]);
	}
	for(int count=2; count<max; count++){
		for(int i=0; i<max; i++){
			for(int j=0; j<max-count; j++){
					for(int k=j; k<j+count; k++ ){
								printf("%c ",question[i][k]);
					}
				//printf("%c ",question[i][j]);
			}
			printf("\n");
		}
	}
	    

}
