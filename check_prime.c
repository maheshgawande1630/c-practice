#include<stdio.h>

int main(){
int num,i, flag=1 ;

//flag=1, Prime number
//flag=0, Not prime number

printf("Enter number ");
scanf("%d", &num);

if(num<=1){
    flag=0;
}

else{

    for(i=2;i<num;i++){
        while (num%i==0)
        {
           flag=0;
           break;
        }
        
    }
}

if(flag==1){

    printf("Number is prime");
}
else{

    printf("Not a prime number");
}

return 0;

}


