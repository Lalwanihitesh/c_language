#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {
    char eventName[50];
    char customerName[50];
    int guests;
    int minutes;
    int servers;
    float costForOneServer, costForServers, costForFood, avgCostPerPerson, totalCost, deposit;

    printf("***************Event Management System***************\n");

    // Input details
    printf("Enter the name of the event: ");
    fgets(eventName, sizeof(eventName), stdin);
    eventName[strcspn(eventName, "\n")] = 0;  // Remove trailing newline

    printf("Enter the customer's first and last name: ");
    fgets(customerName, sizeof(customerName), stdin);
    customerName[strcspn(customerName, "\n")] = 0;

    printf("Enter the number of guests: ");
    scanf("%d", &guests);

    printf("Enter the number of minutes in the event: ");
    scanf("%d", &minutes);

    // Calculate values
    servers = (int)ceil(guests / 20.0);
    costForOneServer = (minutes / 60.0) * 18.50 + 20.70;
    costForServers = servers * costForOneServer;
    costForFood = guests * 20.70;
    avgCostPerPerson = costForFood / guests;
    totalCost = costForServers + costForFood;
    deposit = totalCost * 0.25;

    // Output estimate
    printf("\n================Event estimate for: %s================\n", customerName);
    printf("Number Of Server: %d\n", servers);
    printf("The Cost for Servers: %.2f\n", costForServers);
    printf("The Cost for Food is: %.2f\n", costForFood);
    printf("Average Cost Per Person: %.2f\n\n", avgCostPerPerson);
    printf("Total cost is: %.2f\n", totalCost);
    printf("Please deposit a 25%% deposit to reserve the event\n");
    printf("The deposit needed is: %.2f\n", deposit);

    return 0;
}

