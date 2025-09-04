/*
 Psudocode is on a different file (psudo.md)
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

// This should be broken up into functions
// initialize/create the functions before calling them.
int main() {
	//variables
	char userName[20];
	int turns = 0;
	int guess = -999;
	srand(time(NULL)); //seeds the random number gen so it's actually random
	int correct = (rand() % 100) + 1;
	int keepGoing = true;

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

// !gcc % to compile - do this after making changes!
// ./a.out to run
// gdb debugs (gdb a.out)
//  gcc -g guess.c (includes the symbol table, 'guess.c' could be any program name)
//  break main or break 5 (either line # or function name to add a breakpoint while in the debugger)
//  next (goes to next line)
//  step (to go into the function)
//  watch i ('i' can be any variable, the watch command will tell you it's last and current value every time you go next)
