Create a random number guessing game

Create an int with a random number 1-100
Create int for guess
Create int for turn set to 0
Create a boolean for keepGoing
creat char[] for name

ask the user for the name
greet user with name

int = rand();
char name[20];
keepGoing = 0;
int turns = 0;

while keepGoing is true:
    turns++;
    print("Guess a number: );
    scan for user input
    if guess < correct:
        print("Too low.");
    if guess > correct:
        print("Too high.");
    if guess == correct:
        print("Correct!");
        keepGoing = 1;

if turns > 7:
    print("Good performance!");
if turns < 7:
    print("Poor performance.");
if turns == 7:
    print("Average performance);


