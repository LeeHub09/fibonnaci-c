// Calculate nth number of the fibonacci number sequence

#include <stdio.h>

int main(void){
    int n = 100; // fib(n)
    int i = 0;
    double a = 1;
    double b = 1;
    double fib_n = 0;
    
    // First two fib numbers
	switch(n) {
		case 1 :
			fib_n = 1;
			break;
		case 2 :
			fib_n = 1;
			break;
	}
	
	// All subsequent fib numbers
	if (n > 2){
		for (i = 3; i <= n; i++) {
			fib_n = a + b;
			a = b;
			b = fib_n;
			printf("%.0f\n", fib_n);
		}
	}		
			
	printf("Fibonacci number %d = %.2f\n", n, fib_n);
}