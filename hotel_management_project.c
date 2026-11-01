
#include <stdio.h>
#include <string.h>

#define ROOMS 10

struct Room {
    int roomNo;
    int occupied;
    char customer[50];
    char phone[20];
    int days;
    float rate;
};

struct Room hotel[ROOMS];

/* Function declarations */
void initializeRooms(void);
void saveRooms(void);
void loadRooms(void);
int findRoom(int roomNo);
void displayRooms(void);
void bookRoom(void);
void viewBooking(void);
void checkOut(void);

/* Initialize all rooms */
void initializeRooms(void) {
    int i;

    for (i = 0; i < ROOMS; i++) {
        hotel[i].roomNo = i + 101;
        hotel[i].occupied = 0;
        hotel[i].customer[0] = '\0';
        hotel[i].phone[0] = '\0';
        hotel[i].days = 0;
        hotel[i].rate = 1500.0;
    }
}

/* Save all room records to a file */
void saveRooms(void) {
    FILE *fp;

    fp = fopen("hotel.dat", "wb");

    if (fp == NULL) {
        printf("Error: Could not save data.\n");
        return;
    }

    if (fwrite(hotel, sizeof(struct Room), ROOMS, fp)
        != ROOMS) {
        printf("Error while writing data.\n");
    } else {
        printf("Data saved successfully.\n");
    }

    fclose(fp);
}

/* Load room records from a file */
void loadRooms(void) {
    FILE *fp;
    size_t count;

    fp = fopen("hotel.dat", "rb");

    if (fp == NULL) {
        /* File does not exist yet */
        initializeRooms();
        saveRooms();
        return;
    }

    count = fread(hotel, sizeof(struct Room), ROOMS, fp);
    fclose(fp);

    if (count != ROOMS) {
        printf("Data file is incomplete. Initializing rooms.\n");
        initializeRooms();
        saveRooms();
    } else {
        printf("Previous hotel records loaded successfully.\n");
    }
}

/* Find the array index of a room */
int findRoom(int roomNo) {
    int i;

    for (i = 0; i < ROOMS; i++) {
        if (hotel[i].roomNo == roomNo) {
            return i;
        }
    }

    return -1;
}

/* Display room status */
void displayRooms(void) {
    int i;

    printf("\n--- ROOM STATUS ---\n");

    for (i = 0; i < ROOMS; i++) {
        printf("Room %d | %s | Rate: Rs. %.2f/day\n",
               hotel[i].roomNo,
               hotel[i].occupied ? "Occupied" : "Available",
               hotel[i].rate);
    }
}

/* Book a room */
void bookRoom(void) {
    int roomNo, index, days;
    char name[50], phone[20];

    printf("Enter room number (101-110): ");

    if (scanf("%d", &roomNo) != 1) {
        printf("Invalid input.\n");
        return;
    }

    index = findRoom(roomNo);

    if (index == -1) {
        printf("Invalid room number.\n");
        return;
    }

    if (hotel[index].occupied) {
        printf("Room is already occupied.\n");
        return;
    }

    printf("Enter customer name: ");
    scanf(" %49[^\n]", name);

    printf("Enter phone number: ");
    scanf("%19s", phone);

    printf("Enter number of days: ");

    if (scanf("%d", &days) != 1 || days <= 0) {
        printf("Invalid number of days.\n");
        return;
    }

    strcpy(hotel[index].customer, name);
    strcpy(hotel[index].phone, phone);
    hotel[index].days = days;
    hotel[index].occupied = 1;

    printf("Room booked successfully.\n");
    printf("Estimated bill: Rs. %.2f\n",
           hotel[index].rate * hotel[index].days);

    saveRooms();
}

/* View a booking */
void viewBooking(void) {
    int roomNo, index;

    printf("Enter room number: ");

    if (scanf("%d", &roomNo) != 1) {
        printf("Invalid input.\n");
        return;
    }

    index = findRoom(roomNo);

    if (index == -1) {
        printf("Invalid room number.\n");
        return;
    }

    if (!hotel[index].occupied) {
        printf("No booking found for this room.\n");
        return;
    }

    printf("\nCustomer: %s\n", hotel[index].customer);
    printf("Phone: %s\n", hotel[index].phone);
    printf("Room: %d\n", hotel[index].roomNo);
    printf("Days: %d\n", hotel[index].days);
    printf("Estimated bill: Rs. %.2f\n",
           hotel[index].rate * hotel[index].days);
}

/* Check out a customer */
void checkOut(void) {
    int roomNo, index;
    float bill;

    printf("Enter room number: ");

    if (scanf("%d", &roomNo) != 1) {
        printf("Invalid input.\n");
        return;
    }

    index = findRoom(roomNo);

    if (index == -1) {
        printf("Invalid room number.\n");
        return;
    }

    if (!hotel[index].occupied) {
        printf("Room is already available.\n");
        return;
    }

    bill = hotel[index].rate * hotel[index].days;

    printf("\nCustomer: %s\n", hotel[index].customer);
    printf("Final bill: Rs. %.2f\n", bill);

    hotel[index].occupied = 0;
    hotel[index].customer[0] = '\0';
    hotel[index].phone[0] = '\0';
    hotel[index].days = 0;

    saveRooms();

    printf("Checkout completed. Room is now available.\n");
}

/* Main function */
int main(void) {
    int choice;

    loadRooms();

    do {
        printf("\n===== HOTEL MANAGEMENT SYSTEM =====\n");
        printf("1. Display rooms\n");
        printf("2. Book a room\n");
        printf("3. View booking\n");
        printf("4. Check out\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1) {
            int ch;
            while ((ch = getchar()) != '\n' && ch != EOF) {
                /* Clear invalid input */
            }
            printf("Please enter a valid number.\n");
            continue;
        }

        switch (choice) {
            case 1:
                displayRooms();
                break;

            case 2:
                bookRoom();
                break;

            case 3:
                viewBooking();
                break;

            case 4:
                checkOut();
                break;

            case 0:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while (choice != 0);

    return 0;
}
