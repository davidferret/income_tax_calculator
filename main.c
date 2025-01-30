#include <stdio.h>

double calculateTax(double income, char status);
void saveTaxResultsToFile(double income, double tax, char status);

int main(void) {
    double income, tax;
    char choice, status;

    do {
        printf("\n--- Income Tax Calculator ---\n");
        printf("Enter your filing status (S for Single, M for Married, H for Head of Household): ");
        scanf(" %c", &status);
        
        printf("Enter the amount of your taxable income: ");
        scanf("%lf", &income);
        
        if (income < 0) {
            printf("Invalid amount entered!\n");
        } else {
            tax = calculateTax(income, status);
            printf("Your tax amount is: %.2lf\n", tax);
            saveTaxResultsToFile(income, tax, status);
        }
        
        printf("\nWould you like to calculate tax for another income? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    
    printf("Thank you for using the income tax calculator!\n");
    return 0;
}

double calculateTax(double income, char status) {
    double tax_rate, base, deduct, tax;
    
    // Different tax brackets based on filing status
    if (status == 'S') { // Single
        if (income <= 10275) {
            tax_rate = 0.10;
            base = 0;
            deduct = 0;
        } else if (income <= 41775) {
            tax_rate = 0.12;
            base = 1027.50;
            deduct = 10275;
        } else if (income <= 89075) {
            tax_rate = 0.22;
            base = 4807.50;
            deduct = 41775;
        } else if (income <= 170050) {
            tax_rate = 0.24;
            base = 15213.50;
            deduct = 89075;
        } else {
            tax_rate = 0.32;
            base = 34647.50;
            deduct = 170050;
        }
    } else if (status == 'M') { 
        if (income <= 20550) {
            tax_rate = 0.10;
            base = 0;
            deduct = 0;
        } else if (income <= 83550) {
            tax_rate = 0.12;
            base = 2055.00;
            deduct = 20550;
        } else if (income <= 178150) {
            tax_rate = 0.22;
            base = 9615.00;
            deduct = 83550;
        } else if (income <= 340100) {
            tax_rate = 0.24;
            base = 30427.00;
            deduct = 178150;
        } else {
            tax_rate = 0.32;
            base = 69295.00;
            deduct = 340100;
        }
    } else if (status == 'H') { 
        if (income <= 14650) {
            tax_rate = 0.10;
            base = 0;
            deduct = 0;
        } else if (income <= 55900) {
            tax_rate = 0.12;
            base = 1465.00;
            deduct = 14650;
        } else if (income <= 89050) {
            tax_rate = 0.22;
            base = 6415.00;
            deduct = 55900;
        } else if (income <= 170050) {
            tax_rate = 0.24;
            base = 13155.00;
            deduct = 89050;
        } else {
            tax_rate = 0.32;
            base = 31800.00;
            deduct = 170050;
        }
    } else {
        printf("Invalid filing status! Defaulting to Single.\n");
        return calculateTax(income, 'S');
    }
    
    tax = base + (tax_rate * (income - deduct));
    return tax;
}

void saveTaxResultsToFile(double income, double tax, char status) {
    FILE *file = fopen("tax_results.txt", "w");
    if (!file) {
        printf("Error creating results file!\n");
        return;
    }
    
    fprintf(file, "Income Tax Calculation:\n");
    fprintf(file, "Filing Status: %c\n", status);
    fprintf(file, "Taxable Income: %.2lf\n", income);
    fprintf(file, "Calculated Tax: %.2lf\n", tax);
    
    fclose(file);
    printf("Results saved to 'tax_results.txt'.\n");
}
