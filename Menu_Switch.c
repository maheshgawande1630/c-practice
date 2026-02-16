#include<stdio.h>

int main(){

int choice,a,b;

printf("Menu\n");
printf("1.Addition\n");
printf("2.Subtraction\n");
printf("3.Multiplication\n");
printf("4.Division\n");


printf("Enter choice");
scanf("%d", &choice);

printf("Enter a and b \n");
scanf("%d", &a);
scanf("%d", &b);

switch(choice){

    case 1:
    printf("Addition = %d", a+b);
    break;

    case 2:
    printf("Subtraction= %d", a-b);
    break;

    case 3:
    printf("multiplication =%d", a*b);
    break;

    case 4:
    printf("division =%d", a/b);
    break;

    default:
    printf("Invalid choice");


    }

return 0;


}