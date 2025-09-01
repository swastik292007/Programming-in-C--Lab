 #include <stdio.h>
 int main() {
 int n, i, isPrime = 1;
 printf("Enter a positive integer: ");
 scanf("%d", &n);
 if (n <= 1) {
 printf("%d is not a prime number.\n", n);
 return 0;
 }
 i = 2;
 while (i <= n / 2) {
 if (n % i == 0) {
 isPrime = 0;
 break;
 }
 i++;
 }
 if (isPrime)
 printf("%d is a prime number.\n", n);
 else
 printf("%d is not a prime number.\n", n);
 return 0;
 } 





 