#include <stdio.h>

int main() {
    //Declaration of variables
    char EmployeeName[85];
    int EmployeeID;
    float BasicSalary;
    float hra, da, pf;
    float GrossSalary, NetSalary;



    // To accept inputs from the employee or user
    printf("Employee Name: ");
    scanf("%s",EmployeeName);

    printf("Employee ID: ");
    scanf("%d",&EmployeeID);

    printf("Employee Basic Salary: ₹");
    scanf("%f",&BasicSalary);



    // To calculate hr, da and pf
    hra = 0.2 * BasicSalary;
    da= 0.1 * BasicSalary;
    pf= 0.12 * BasicSalary;



    //To calculate GrossSalary, NetSalary
    GrossSalary = BasicSalary + hra + da;
    NetSalary = GrossSalary - pf;



    //To be displayed
    printf("\n\n\nEmployee Salary Slip\n\n");
    printf("Employee Name: %s\n",EmployeeName);
    printf("Employee ID: %d\n",EmployeeID);
    printf("Employee Basic Salary: ₹%.2f\n",BasicSalary);
    printf("HRA: ₹%.2f\n",hra);
    printf("DA: ₹%.2f\n",da);
    printf("PF: ₹%.2f\n",pf);
    printf("Gross Salary: ₹%.2f\n",GrossSalary);
    printf("Net Salary: ₹%.2f\n",NetSalary);



    return 0;
}