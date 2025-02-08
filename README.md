# Income Tax Calculator

This C project calculates income tax based on your filing status and taxable income, applying progressive tax brackets dynamically. It ensures accurate tax computation and allows you to save results for future reference. The way I programmed this project was by implementing a tiered tax calculation system that applies different tax rates depending on income levels. I made sure to handle multiple filing statuses, including Single, Married Filing Jointly, and Head of Household, so the calculations align with standard tax policies. Input validation plays a key role in making sure only valid income values and filing statuses are accepted. Additionally, I added a feature to save tax results to a text file, making it easy to keep track of multiple calculations.

I built this project because tax season is coming up already and I wanted to create a simple yet effective tool for understanding how progressive tax systems work. It was an interesting challenge to structure the logic so that different tax brackets apply correctly while keeping the program user-friendly. Hopefully, this makes tax calculations a little easier and helps you get a better grasp of how taxes work.

## Example Output
```
--- Income Tax Calculator ---
Enter your filing status (S for Single, M for Married, H for Head of Household): M
Enter the amount of your taxable income: 75000
Your tax amount is: 8670.00
Results saved to 'tax_results.txt'.

Would you like to calculate tax for another income? (y/n): y
Enter your filing status (S for Single, M for Married, H for Head of Household): H
Enter the amount of your taxable income: 60000
Your tax amount is: 7415.00
Results saved to 'tax_results.txt'.

Would you like to calculate tax for another income? (y/n): n
Thank you for using the income tax calculator!

```
