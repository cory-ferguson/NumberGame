Create a random number guessing game

Create an int with a random number 1-100
Create int for guess
Create int for turn set to 0
Create a boolean for keepGoing
creat char[] for name

ask the user for the name
greet user with name

main():
    int correctNum will be  rand();
    int guess starts at -999
    char name[20];
    int keepGoing starts True;
    int turns starts at  0;

    generate a random between 1 and 100 put in correct 
    ask for user's name
    store it in name
    
    greet the user with name
    
    while keepGoing is true:
        increment turns
        ask user for a number;
        put it in guess 

        if guess < correct:
            print("Too low.");
        else if guess > correct:
            print("Too high.");
        else:
            print("Correct!");
            set keepGoing to false

    if turns > 7:
        print("Great!");
    if turns < 7:
        print("You could do better.");
    if turns == 7:
        print("Pretty good");


