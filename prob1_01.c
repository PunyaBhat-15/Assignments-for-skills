#include<stdio.h>
int main(){
    //initalizing the variables
    int salary[10],i,No_employees;
    //for the count of the 3 salary levels
    int low_count=0,middle_count=0,high_count=0;
    //reading the input
    printf("Enter the Number of employees: ");
    scanf("%d",&No_employees);
    printf("Enter the salaries:\n");
    for(i=0;i<No_employees;i++){
        scanf("%d",&salary[i]);
    }
    //calculating the number of people in each salary level
    for(i=0;i<No_employees;i++){
       if(salary[i]<=30000){
        low_count+=1;
        }
       else if(salary[i]>30000 && salary[i]<70000){
        middle_count+=1;
       }
       else if(salary[i]>70000){
        high_count+=1;
       }
       else{
        printf("%d does not match the requisite hence is ignored\n",salary[i]);
       }
    }
    //printing the salary level
    printf("low salaray:%d\nmiddle salary:%d\nhigh salary:%d\n",low_count,middle_count,high_count);
    return 0;
}