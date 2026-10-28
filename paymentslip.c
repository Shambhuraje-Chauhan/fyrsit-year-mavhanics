#include <stdio.h>

#define PF 200

int main() {
    char name[50], designation[50], month[20];
    int employeeID;
    float other, basic, hra, tax, deduction, da, net, gross;

    printf("Enter Employee Name: ");
    scanf(" %49[^\n]", name);

    printf("Enter Employee ID: ");
    scanf("%d", &employeeID);

    printf("Enter Designation: ");
    scanf(" %49[^\n]", designation);

    printf("Enter Payment Month: ");
    scanf(" %19s", month);

    printf("Enter Basic Salary: ");
    scanf("%f", &basic);

    printf("Enter Other Allowance: ");
    scanf("%f", &other);

    hra = 0.8 * basic;
    da = 1.6 * basic;

    gross = basic + hra + da + other;

    if (gross >= 100000) {
        tax = 0.2 * gross;
    }
    else if (gross > 50000) {
        tax = 0.1 * gross;
    }
    else {
        tax = 0;
    }

    deduction = PF + tax;
    net = gross - deduction;

    printf("\n\n========== EMPLOYEE PAYMENT SLIP ==========\n");
    printf("Employee Name: %s\n", name);
    printf("Employee ID: %d\n", employeeID);
    printf("Designation: %s\n", designation);
    printf("Payment Month: %s\n", month);

    printf("-------------------------------------------\n");
    printf("Basic Salary:       Rs. %.2f\n", basic);
    printf("HRA:                Rs. %.2f\n", hra);
    printf("DA:                 Rs. %.2f\n", da);
    printf("Other Allowance:    Rs. %.2f\n", other);

    printf("-------------------------------------------\n");
    printf("Gross Salary:       Rs. %.2f\n", gross);
    printf("PF Deduction:       Rs. %.2f\n", (float)PF);
    printf("Tax:                Rs. %.2f\n", tax);
    printf("Total Deduction:    Rs. %.2f\n", deduction);
    printf("NET SALARY:         Rs. %.2f\n", net);
    printf("===========================================\n");

    return 0;
}