#include<stdio.h>


int main(){
    int a [5][5],m,n;
    scanf("%d",&m);
    scanf("%d",&n);
    readmatrix(m,n,a[5][5]);
}

void readmatrix(int m,int n ,int a[5][5]){
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("%d",a[1][1]);
}