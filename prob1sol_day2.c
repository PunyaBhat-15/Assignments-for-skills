#include <stdio.h>
#include <string.h> 
void eligiblecalculation(int age,char health_condition[],int monthly_salary){
     if (age > 18 && age < 60) {
        if (strcmp(health_condition, "no") == 0 && monthly_salary >= 25000)//strcmp to compare 2 strings
         {
            printf("Eligible for Medical Insurance\n");
        }
    } else {
        printf("Not eligible for Medical Insurance\n");
    }
}
int main(){
    int age, monthly_salary;
    char health_condition[6]; 
    
    printf("Enter the age: ");
    scanf("%d", &age);
    
    printf("Any pre-existing Condition (yes/no): ");
    scanf("%s", health_condition);  
    
    printf("Enter Monthly Salary: ");
    scanf("%d", &monthly_salary);
     eligiblecalculation( age,health_condition[], monthly_salary);
    return 0;
}
