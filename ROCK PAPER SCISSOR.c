#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int userChoice, computerChoice;
    
    // Seed the random number generator with current time
    srand(time(NULL));

    printf("--- Rock Paper Scissors ---\n");
    printf("Enter your choice:\n");
    printf("1. Rock\n2. Paper\n3. Scissors\n");
    printf("Selection: ");
    scanf("%d", &userChoice);

    // Generate computer choice (1 to 3)
    computerChoice = (rand() % 3) + 1;

    // Display choices
    const char* moves[] = {"Rock", "Paper", "Scissors"};
    
    if (userChoice < 1 || userChoice > 3) {
        printf("Invalid choice! Please run the game again.\n");
        return 1;
    }

    printf("\nYou chose: %s\n", moves[userChoice - 1]);
    printf("Computer chose: %s\n", moves[computerChoice - 1]);

    // Determine the winner
    if (userChoice == computerChoice) {
        printf("Result: It's a Tie!\n");
    } else if ((userChoice == 1 && computerChoice == 3) || 
               (userChoice == 2 && computerChoice == 1) || 
               (userChoice == 3 && computerChoice == 2)) {
        printf("Result: You Win! 🎉\n");
    } else {
        printf("Result: Computer Wins! 🤖\n");
    }

    return 0;
}