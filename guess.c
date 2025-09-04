/*
 Psudocode is on a different file (psudo.md)
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
	//variables
	char userName[20];
	int turns = 0;
	int guess = -999;
	srand(time(NULL)); //seeds the random number gen so it's actually random
	int correct = (rand() % 100) + 1;
	int keepGoing = true;
	printf("%d", &correct);

	//getting user's name
	printf("Hi! What is your name? ");
	scanf("%s", userName);
	printf("Let's play a game, %s! \n", userName);

	while (keepGoing){
		turns++;
		printf("Turn %d: Please enter a number. ", turns);
		scanf("%d", &guess);

		if (guess < correct){
			printf("Too low... \n");
		} else if (guess > correct){
			printf("Too high... \n");
		} else {
			printf("You got it! \n");
			if (turns < 7){
				printf("Great job!");
			} else if (turns > 7){
				printf("Could be better...");
			} else {
				printf("Pretty good!");
			}// end if
			keepGoing = false;
		}// end if
	} // end while

	return 0;
} // end main

// !gcc % to compile
// ./a.out to run
