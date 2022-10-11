#include<stdio.h>
void print(int,int,int[][5]);

void main(){
    void read(int,int);
    int m,n;
    printf("Enter the no of rows: ");
    scanf("%d",&m);
    printf("Enter the no of cols: ");
    scanf("%d",&n);
    read(m,n);
}

void read(int a,int b){
    int c[5][5],x=1;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++,x++){
            printf("enter element no %d : ",x);
            scanf("%d",&c[i][j]);
        }
    }
    print(a,b,c);
}


void print(int x,int y,int z[][5]){
    printf("\nthe %dX%d matrix is :\n\n",x,y);
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d\t",z[i][j]);
        }
        printf("\n");
    }
}