#include<stdio.h>

struct complex{
        int real,img;
    };

void read(struct complex *);
void print(struct complex );
void sum(struct complex, struct complex ,struct complex *);
void product(struct complex ,struct complex ,struct complex *);


void main(){

    struct complex a,b,c,d;

    printf("\tFirst complex number\n");
    read(&a);
    print(a);
    
    printf("\tSecond complex number\n");
    read(&b);
    print(b);

    printf("\tSum of complex numbers\n");
    sum(a,b,&c);
    print(c);

    printf("\tProduct complex number\n");
    product(a,b,&d);
    print(d);
   
}

void read(struct complex *x){
    printf("Enter real part : ");
    scanf("%d",&x->real);
    printf("Enter imaginary part : ");
    scanf("%d",&x->img);
}

void print(struct complex x){
    printf("\nThe complex number is %d+(%di)\n",x.real,x.img);
    printf("----------------------------------\n");
}

void sum(struct complex x,struct complex y,struct complex *z){
    z->real=x.real+y.real;
    z->img=x.img+y.img;
}

void product(struct complex x,struct complex y,struct complex *z){
    z->real=(x.real*y.real)-(x.img*y.img);
    z->img=(x.img*y.real)+(x.real*y.img);
}