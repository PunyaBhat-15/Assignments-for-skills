#include <stdio.h>
 void choicechecking(int choice){
     int total_amt=10000;
    int amount;
   switch(choice){
       case 1:printf("Enter amount: ");
              scanf("%d",&amount);
              total_amt=total_amt-amount;
              printf("Transaction Successful. Remaining Balance: %d",total_amt);
              break;
        case 2:printf("Enter amount: ");
               scanf("%d",&amount);
               total_amt=total_amt+amount;
               printf("Deposition Successful. Remaining Balance: %d",total_amt);
               break;
        case 3:printf("total Balance: %d",total_amt);
               break;
        case 4:printf("invalid choice try again\n");
               break;
   }
 }

int main(){
   int choice;
   printf("ATM Transation System\n");
   printf("Enter your choice:\n");
   printf("1. Withdraw\n2. Deposit\n3.Check Balance\n");
   scanf("%d",&choice);
   choicechecking( choice);
   
    return 0;
}
