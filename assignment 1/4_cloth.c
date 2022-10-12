#include<stdio.h>

void main(){

    int answer=1;
    for (int i = 1; i <= 36; i++)
    {
        if(36%i==0 && 24%i==0){
            answer=i;
        }   
    }
    
    printf("\n Cut each strip of size: %d ",answer);
}
