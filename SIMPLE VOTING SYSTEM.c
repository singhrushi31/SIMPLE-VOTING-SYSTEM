#include <stdio.h>
#include <string.h>

int main() {
    int choice;
    int candidate1 = 0, candidate2 = 0, candidate3 = 0, candidate4 = 0;
    int totalVotes = 0;
    char password[20];
    const char adminPass[] = "admin123";  // Admin password

    printf("==============================\n");
    printf("       SIMPLE VOTING SYSTEM   \n");
    printf("==============================\n");

    while (1) {
        printf("\n1. Vote for Candidate 1\n");
        printf("2. Vote for Candidate 2\n");
        printf("3. Vote for Candidate 3\n");
        printf("4. Vote for Candidate 4\n");
        printf("5. View Results (Admin Only)\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                candidate1++;
                totalVotes++;
                printf("You voted for Candidate 1 ✅\n");
                break;

            case 2:
                candidate2++;
                totalVotes++;
                printf("You voted for Candidate 2 ✅\n");
                break;

            case 3:
                candidate3++;
                totalVotes++;
                printf("You voted for Candidate 3 ✅\n");
                break;

            case 4:
                candidate4++;
                totalVotes++;
                printf("You voted for Candidate 4 ✅\n");
                break;

            case 5:
                printf("Enter admin password: ");
                scanf("%s", password);
                if (strcmp(password, adminPass) == 0) {
                    printf("\n======= Voting Results =======\n");
                    printf("Candidate 1: %d votes\n", candidate1);
                    printf("Candidate 2: %d votes\n", candidate2);
                    printf("Candidate 3: %d votes\n", candidate3);
                    printf("Candidate 4: %d votes\n", candidate4);
                    printf("Total Votes: %d\n", totalVotes);

                    if (candidate1 > candidate2 && candidate1 > candidate3 && candidate1 > candidate4)
                        printf("Winner: Candidate 1 🏆\n");
                    else if (candidate2 > candidate1 && candidate2 > candidate3 && candidate2 > candidate4)
                        printf("Winner: Candidate 2 🏆\n");
                    else if (candidate3 > candidate1 && candidate3 > candidate2 && candidate3 > candidate4)
                        printf("Winner: Candidate 3 🏆\n");
                    else if (candidate4 > candidate1 && candidate4 > candidate2 && candidate4 > candidate3)
                        printf("Winner: Candidate 4 🏆\n");
                    else
                        printf("It's a tie 🤝\n");
                } else {
                    printf("Incorrect password ❌\n");
                }
                break;

            case 6:
                printf("Exiting... Thank you for voting! 🙏\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
