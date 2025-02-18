#include <stdio.h>

int main()
{   //initalizing the variables
    int units_consumed,total_bill=0,n,i;
    //reading the input
    printf("Enter the number of customers\n");
    scanf("%d",&n);
    for(i=0;i<n;i++){
    printf("Enter thr units consumed: ");
    scanf("%d",&units_consumed);
    //calculation of the bill
    if(units_consumed>200){
        total_bill+=100*2;//first 100 units as mentioned
        total_bill+=100*3;
        total_bill+=(units_consumed-200)*5;
    }
    else if(units_consumed>100){
        total_bill+=100*2;//first 100 units as mentioned
        total_bill+=(units_consumed-100)*3;
    }}
    printf("tota bill: ₹%d",total_bill);
    return 0;
}
