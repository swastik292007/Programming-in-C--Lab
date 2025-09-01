 #include <stdio.h>
 int main() {
 double x;
 printf("Enter a value for x (|x| < 1): ");
 scanf("%lf", &x);
 if (x <=-1.0 || x >= 1.0) {
 printf("Invalid input. Please ensure |x| < 1.\n");
 return 1;
 }
 double actual = 1.0 / (1.0- x);
 double partial_sum = 0.0;
 double term = 1.0; // first term (x^0 = 1)
 int n = 0;
 while ((partial_sum- actual > 0.01) || (actual- partial_sum > 0.01)) {
 partial_sum += term;
 term = term * x; // next term
 n++;
 }
 printf("Smallest n = %d, Partial Sum = %.5f, Actual = %.5f\n",
 n-1, partial_sum, actual);
 return 0;
 }