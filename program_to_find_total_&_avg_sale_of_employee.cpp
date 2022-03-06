#include <stdio.h>

struct Employee
{
    char name[20];
    float sale;
    float average;


};
void main()
{

    int no_of_employee;
struct Employee e[no_of_employee];
printf("###Enter the Details of Employees###");
printf("\nEnter Total Number of Employees:");
scanf("%d", &no_of_employee);
int TotalSales = 0;
int i;
for (i = 0; i < no_of_employee; i++)
{
    printf("\nEnter the employee Name:");
    scanf("%s", e[no_of_employee].name);
    printf("\nEnter the Total Number of Sales done by %s:", e[no_of_employee].name);
    scanf("%d", &e[no_of_employee].sale);
    TotalSales = TotalSales + e[no_of_employee].sale;

}

printf("Total Sales of  Employee:%d", TotalSales);
//Finding  Average of sales

float Average = (no_of_employee) / TotalSales;
printf("Average sales of all the employee:%f", Average);
     
    
}