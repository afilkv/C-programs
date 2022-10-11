#include<stdio.h>

void main(){

    int c1,c2;
    for (int i = 1; i <= 36; i++)
    {
        c1=36/i;
        for (int j = 1; j <= 24; j++)
        {
            c2=27/j;
            if(c1==c2){
                printf("\n Cut each strip of size: %d ",c1);
                break;
            }
        }
        if(c1==c2)break;
    }
}
