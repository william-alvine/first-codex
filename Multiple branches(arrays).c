
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int chain[3][5][10];
    int branch, floor, room;
    int totalOccupied = 0;

    // Initialize random number generator
    srand(time(NULL));

    // Assign random occupancy to each room
    for (branch = 0; branch < 3; branch++) {
        for (floor = 0; floor < 5; floor++) {
            for (room = 0; room < 10; room++) {
                chain[branch][floor][room] = rand() % 2;

                if (chain[branch][floor][room] == 1) {
                    totalOccupied++;
                }
            }
        }
    }

    // Display occupancy data
    printf("Hotel Chain Room Occupancy\n");
    printf("1 = Occupied, 0 = Vacant\n\n");

    for (branch = 0; branch < 3; branch++) {
        printf("Branch %d:\n", branch + 1);

        for (floor = 0; floor < 5; floor++) {
            printf("Floor %d: ", floor + 1);

            for (room = 0; room < 10; room++) {
                printf("%d ", chain[branch][floor][room]);
            }

            printf("\n");
        }

        printf("\n");
    }

    // Display total occupied rooms
    printf("Total occupied rooms across all branches: %d\n",
           totalOccupied);

    return 0;
}
