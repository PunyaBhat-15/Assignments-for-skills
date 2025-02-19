#include <stdio.h>
#include <string.h>

int getVehicleCode(char vehicleType[]) {
    if (strcmp(vehicleType, "Car") == 0) {
        return 1;
    } else if (strcmp(vehicleType, "Truck") == 0) {
        return 2;
    } else if (strcmp(vehicleType, "Bike") == 0) {
        return 3;
    } else if (strcmp(vehicleType, "Bus") == 0) {
        return 4;
    } else {
        return 0; // Invalid vehicle type
    }
}

int main() {
    int n, totalToll = 0;
    char vehicleType[10];

    printf("Enter number of vehicles: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter vehicle type %d: ", i + 1);
        scanf("%s", vehicleType);

        switch (getVehicleCode(vehicleType)) {
            case 1: // Car
                totalToll += 50;
                break;
            case 2: // Truck
                totalToll += 100;
                break;
            case 3: // Bike
                totalToll += 20;
                break;
            case 4: // Bus
                totalToll += 80;
                break;
            default:
                printf("Invalid vehicle type\n");
                break;
        }
    }

    printf("Total Toll Tax: ₹%d\n", totalToll);

    return 0;
}
