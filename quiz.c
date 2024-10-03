#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

//checks if user enters "quiz -1 answer"
if (argc>3 && strcmp(argv[2],"-1") == 0 && strcmp(argv[1],"quiz") == 0){

    //checks if user enters correct answer and outputs "correct"
    if (strcmp(argv[3], "touch") == 0){
        puts("correct");
        return EXIT_SUCCESS;
    }

    //checks if user enters incorrect answer and outputs "incorrect"
    else{
        puts("incorrect");
        return EXIT_SUCCESS;
    }

}

//checks if user enters "quiz -2 answer" and gives feedback accordingly
if (argc>3 && strcmp(argv[2],"-2" ) == 0 && strcmp(argv[1],"quiz") == 0){

    if (strcmp(argv[3], "status") == 0){
        puts("correct");
        return EXIT_SUCCESS;
    }

    else{
        puts("incorrect");
        return EXIT_SUCCESS;
    }

}
//checks if user enters "quiz -3 answer" and gives feedback accordingly
if (argc>3 && strcmp(argv[2],"-3") == 0 && strcmp(argv[1],"quiz") == 0){

    if (strcmp(argv[3], "printf") == 0){
        puts("correct");
        return EXIT_SUCCESS;
    }

    else{
        puts("incorrect");
        return EXIT_SUCCESS;
    }

}

//outputs usage if user enters "quiz"
if (strcmp(argv[1],"quiz") == 0 && argc == 2) {
puts("Usage: quiz [-#] [answer]");
puts("Try 'quiz --help' for more information");
}

//outputs question #1
if (strcmp(argv[2],"-1") == 0 && argc<4 && strcmp(argv[1],"quiz") == 0) {
puts("question 1: What is the command to create a new file?");
}

//outputs question #2
if (strcmp(argv[2],"-2") == 0 && argc<4 && strcmp(argv[1],"quiz") == 0) {
puts("question 2: What is the command to check the current status of a git repository? (the word you enter after 'git')");
}

//outputs question #3
if (strcmp(argv[2],"-3") == 0 && argc<4 && strcmp(argv[1],"quiz") == 0) {
puts("question 3: What is the command to output formatted text in C");
}

//If user types "--help" it provides them instructions on how to use the program
if (strcmp(argv[2],"--help") == 0 && argc<4 && strcmp(argv[1],"quiz") == 0) {
puts("enter 'quiz -1' to view question and quiz -1 'answer' to provide a one word answer to the question");
}

//Outputs bad flag message
if (strcmp(argv[2],"-bad") == 0 && strcmp(argv[3],"flag") == 0 && argc<5 && strcmp(argv[1],"quiz") == 0) {
puts("Usage: quiz [-#] [answer]");
puts("Try 'quiz --help' for more information");
return EXIT_FAILURE;
}

return EXIT_SUCCESS;
}

