/*
 Make a random number game where the user guesses the number
 Use a random nummber generator 
 Ask the user for a number
 If user guesses too low say "Too Low"
 If the user guesses too high say "Too high"
 If the user guesses the correct number say "Correct!"
 If user gets it in 6 or less tries tell them "Great job!"
 7 tries tell them "Average Performance"
 If user gets it in more than 8 tries tell them "Poor performance" 

 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define TRUE -1
#define FALSE 0


int main() {
	char name[20];
	printf("What is your name? \n");
	scanf("%s", name);
	printf("Hi, %s! \n" name);

	printf("Guess a number \n");
	int turns = 0;
	srand(time(NULL));
	int correct = rand() % 100;
	int keepGoing = TRUE;
	int guess;
	printf("correct: %d", correct);

	while (keepGoing){
		printf("Your guess: ");
		scanf("%d", &guess);

		if (guess > correct){
			printf("Too high.");
		} else if (guess < correct){
			printf("Too low.");
		} else {
			keepGoing = FALSE;
		}// end if
	} // end while
	printf("You win!");

	return 0;
} // end main
