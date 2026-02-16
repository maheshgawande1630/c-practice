#include<stdio.h>

int main(){

int n,a,b,sum;
a=0;
b=1;
sum=0;

printf("enter n\n");
scanf("%d", &n);

while(sum<n){

printf("%d\n", sum);

a=b;
b=sum;
sum=a+b;

}


return 0;

}