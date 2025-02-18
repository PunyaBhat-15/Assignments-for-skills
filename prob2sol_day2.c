##include <stdio.h>
#include <string.h> 

int main(){
    int no_vehicles,toll_tax=0;
    char vehicle_type[10];
    printf("Enter the number of vehicles: ");
    scanf("%d",&no_vehicles);
    printf("enter the vehicle types: ");
    for(int i=0;i<no_vehicles;i++)
    {
        scanf("%s",vehicle_type);
        if(strcmp(vehicle_type,"Car")==0){
            toll_tax+=50;
        }
        else if(strcmp(vehicle_type,"Truck")==0){
            toll_tax+=100;
        }
        else if(strcmp(vehicle_type,"Bike")==0){
            toll_tax+=20;
        }
        else if(strcmp(vehicle_type,"Bus")==0){
            toll_tax+=80;
        }
    }
    printf("Total toll Tax: %d ",toll_tax);
    
    return 0;
}