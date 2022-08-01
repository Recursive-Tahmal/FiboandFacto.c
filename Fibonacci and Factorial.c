#include <stdio.h>

//factorial caclulator
int factorial(int num1) {
	if (num1 == 1) {
		return 1;
	}
	else {
		return num1 * factorial(num1 - 1);
	}
}

void factorialUsrInp() {
	int factoInp;
	puts("Enter your factorial number: ");
	scanf_s("%d", &factoInp);
	printf("factorial of %d is %d\n", factoInp, factorial(factoInp));
}

//fibonacci caclulator
int fibonacci(int num1) {
	if (num1 <= 1) {
		return num1;
	}
	else {
		return (fibonacci(num1 - 1) + fibonacci(num1 - 2));
	}
}

//fibonacci UI
void fibonacciUsrInp() {
	int fibInp;
	puts("Enter your fibonacci limit: ");
	scanf_s("%d", &fibInp);

	printf("Fibonacci for %d are:\n", fibInp);
	for (int i = 0; i <= fibInp; ++i) {
		printf("%d ", fibonacci(i));
	}
}

void usrInput() {
	int usrChoice;
	puts("Type 1 for factorial and 2 for fibonacci");
	scanf_s("%d", &usrChoice);
	while (usrChoice < 1 || usrChoice > 2) {
		puts("Wrong input!! ");
		puts("Type 1 for factorial and 2 for fibonacci");
		scanf_s("%d", &usrChoice);
	}
	if (usrChoice == 1) {
		factorialUsrInp();
	}
	else if (usrChoice == 2) {
		fibonacciUsrInp();
	}
}

int main()
{
	usrInput();
}