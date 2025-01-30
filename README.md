# Exponential Function Calculator

This program approximates the exponential function \( e^x \) using a Taylor series expansion. It compares the approximation to the C standard library function and allows results to be exported for further analysis.

- **Taylor Series Approximation**: Computes \( e^x \) using a series expansion.
- **Factorial Memoization**: Optimizes factorial calculations for improved efficiency.
- **Precision Comparison**: Evaluates the difference between the approximation and the standard library function.
- **Result Exporting**: Saves results to a text file and exports convergence data to a CSV file.
- **User-Friendly Interface**: Accepts user-defined inputs and offers repeat calculations.

## Example Usage
```
--- Exponential Function Approximation ---
Enter the value of x: 2
Enter the number of terms (n): 10
Approximate value of e^2: 7.388994708994
The value of e^2 using C library function: 7.389056098931
The absolute difference between the two values: 0.000061389937

Results saved to 'exponential_results.txt'.
Convergence data saved to 'exponential_convergence.csv'.

Would you like to calculate another exponentiation? (y/n): n
Thank you for using the exponential function calculator!

```

