//print namaste if indian , print bonjour if french

#include<stdio.h>

void namaste();
void bonjour();

int main(){

printf("Enter i for indian and f for french\n");
char ch;
scanf("%c", &ch);

if(ch == 'i'){
    namaste();
}

else{
    bonjour();
}

return 0; 

}

void namaste(){

    printf("Namaste\n");
}

void bonjour(){

    printf("Bonjour\n");
}