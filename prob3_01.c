#include <stdio.h>

int main()
{   
    //intialization
    int No_studnets,No_marks[20],i;
    //reading input
    printf("Enter the number of students: ");
    scanf("%d",&No_studnets);
    printf("enter the marks:\n");
    for ( i = 0; i < No_studnets; i++)
    {
        scanf("%d",&No_marks[i]);
    }
    //determing the grades by using if else conditions
     for ( i = 0; i < No_studnets; i++)
    {
       if(No_marks[i]>90){
        printf("student %d: grade A\n",i+1);
       }
       else if(No_marks[i]>80 && No_marks[i]<89){
        printf("student %d: grade B\n",i+1);
       }
       else if(No_marks[i]>70 && No_marks[i]<79){
        printf("student %d: grade C\n",i+1);
       }
       else if(No_marks[i]>60 && No_marks[i]<69){
        printf("student %d: grade D\n",i+1);
       }
       else if(No_marks[i]<60){
        printf("student %d: grade F\n",i+1);
       }
    }
     return 0;
}