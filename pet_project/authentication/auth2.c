#include <stdio.h>
#include <string.h>

#define MAX_USERS 100

typedef struct {
    char username[100];
    char password[100];
} User;

int main() {
    User users[MAX_USERS];
    int numUsers = 0;

    char answer[100];
    printf("Enter your answer: ");
    fgets(answer, sizeof(answer), stdin);
    answer[strcspn(answer, "\n")] = '\0';

    if (strcmp(answer, "LOGIN") == 0) {
        printf("Welcome to Login page\n");
	char username[100];
        char password[100];

        printf("Enter username: ");
        fgets(username, sizeof(username), stdin);
        username[strcspn(username, "\n")] = '\0';

        printf("Enter password: ");
        fgets(password, sizeof(password), stdin);
        password[strcspn(password, "\n")] = '\0';

        // Login validation
        int loggedIn = 0;
        for (int i = 0; i < numUsers; i++) {
            if (strcmp(username, users[i].username) == 0 && strcmp(password, users[i].password) == 0) {
                loggedIn = 1;
                break;
            }
        }

        if (loggedIn) {
            printf("Login successful!\n");
        } else {
            printf("Invalid username or password.\n");
        }

    } else if (strcmp(answer, "SIGN UP") == 0) {
        printf("Welcome to sign up!\n");

        if (numUsers >= MAX_USERS) {
            printf("Maximum number of users reached.\n");
            return 0;
        }

        char username[100];
        char password[100];

        printf("Enter new username: ");
        fgets(username, sizeof(username), stdin);
        username[strcspn(username, "\n")] = '\0';

        printf("Enter new password: ");
        fgets(password, sizeof(password), stdin);
        password[strcspn(password, "\n")] = '\0';

        // Sign-up logic
        // Check if the username is already taken
        int usernameTaken = 0;
        for (int i = 0; i < numUsers; i++) {
            if (strcmp(username, users[i].username) == 0) {
                usernameTaken = 1;
                break;
            }
        }

        if (usernameTaken) {
            printf("Username already taken. Please choose a different username.\n");
        } else {
            // Add the new user to the user array
            strcpy(users[numUsers].username, username);
            strcpy(users[numUsers].password, password);
            numUsers++;

            printf("Sign-up successful!\n");
        }
    }

    return 0;
}

