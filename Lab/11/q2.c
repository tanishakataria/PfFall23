#include <stdio.h>
#include <string.h>

// Define a structure to store information about engine parts
struct EnginePart {
    char serialNumber[4];
    int yearOfManufacture;
    char material[20];
    int quantityManufactured;
};

// Function to retrieve information on parts with serial numbers between BB1 and CC6
void retrieveInformation(struct EnginePart parts[], int numParts) {
    printf("Parts with serial numbers between BB1 and CC6:\n");
    
    for (int i = 0; i < numParts; i++) {
        // Check if the serial number is between BB1 and CC6
        if (strcmp(parts[i].serialNumber, "BB1") >= 0 && strcmp(parts[i].serialNumber, "CC6") <= 0) {
            printf("Serial Number: %s\n", parts[i].serialNumber);
            printf("Year of Manufacture: %d\n", parts[i].yearOfManufacture);
            printf("Material: %s\n", parts[i].material);
            printf("Quantity Manufactured: %d\n", parts[i].quantityManufactured);
            printf("\n");
        }
    }
}

int main() {
    // Declare an array to store information for engine parts
    struct EnginePart parts[] = {
        {"AA0", 2021, "Steel", 100},
        {"BB1", 2022, "Aluminum", 150},
        {"CC6", 2020, "Titanium", 75},
        {"DD2", 2023, "Carbon Fiber", 120},
        {"FF9", 2021, "Plastic", 200}
    };

    // Calculate the number of parts in the array
    int numParts = sizeof(parts) / sizeof(parts[0]);

    // Retrieve information on parts with serial numbers between BB1 and CC6
    retrieveInformation(parts, numParts);

    return 0;
}
