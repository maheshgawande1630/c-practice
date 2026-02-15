//Print Fibonacci series upto n number

#include <stdio.h>

int main(){


    int n, a = 0, b = 1, c;

    printf("Enter N: ");
    scanf("%d", &n);

 
    printf("Fibonacci series up to %d is:\n", n);

    for(int i = 0; a <= n; i++){
    
        printf("%d ", a);
         c = a + b;
         a = b;
         b = c;

                  }
                 

    return 0;

    }
