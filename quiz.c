/*
Soham Hajariwala, hajariws, 03/10/2024
A simple quiz program which has 3 questions and 3 answers
It will give feedback if the user is correct or incorrect
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

    // Ensure that at least two arguments are provided before accessing argv[1] and argv[2]
    if (argc < 2) {
        puts("Usage: quiz [-#] [answer]");
        return EXIT_FAILURE;
    }

    // If user enters "--help", it provides them instructions on how to use the program
    if (argc == 2 && strcmp(argv[1], "quiz") == 0) {
        puts("Usage: quiz [-#] [answer]");
        puts("Try 'quiz --help' for more information");
        return EXIT_SUCCESS;
    }

    if (argc < 3) {
        puts("Usage: quiz [-#] [answer]");
        return EXIT_FAILURE;
    }

    // Checks if user enters "quiz -1 answer"
    if (strcmp(argv[1], "quiz") == 0 && strcmp(argv[2], "-1") == 0) {
        if (argc == 3) {
            // Outputs question #1
            puts("question 1: What is the command to create a new file?");
            return EXIT_SUCCESS;
        } else if (argc == 4 && strcmp(argv[3], "touch") == 0) {
            // Outputs "correct" if answer is "touch"
            puts("correct");
            return EXIT_SUCCESS;
        } else {
            // Outputs "incorrect" for wrong answer
            puts("incorrect");
            return EXIT_SUCCESS;
        }
    }

    // Checks if user enters "quiz -2 answer"
    if (strcmp(argv[1], "quiz") == 0 && strcmp(argv[2], "-2") == 0) {
        if (argc == 3) {
            // Outputs question #2
            puts("question 2: What is the command to check the current status of a git repository? (the word you enter after 'git')");
            return EXIT_SUCCESS;
        } else if (argc == 4 && strcmp(argv[3], "status") == 0) {
            // Outputs "correct" if answer is "status"
            puts("correct");
            return EXIT_SUCCESS;
        } else {
            // Outputs "incorrect" for wrong answer
            puts("incorrect");
            return EXIT_SUCCESS;
        }
    }

    // Checks if user enters "quiz -3 answer"
    if (strcmp(argv[1], "quiz") == 0 && strcmp(argv[2], "-3") == 0) {
        if (argc == 3) {
            // Outputs question #3
            puts("question 3: What is the command to output formatted text in C?");
            return EXIT_SUCCESS;
        } else if (argc == 4 && strcmp(argv[3], "printf") == 0) {
            // Outputs "correct" if answer is "printf"
            puts("correct");
            return EXIT_SUCCESS;
        } else {
            // Outputs "incorrect" for wrong answer
            puts("incorrect");
            return EXIT_SUCCESS;
        }
    }

    // If user types "--help" it provides them instructions on how to use the program
    if (strcmp(argv[2], "--help") == 0 && argc == 3 && strcmp(argv[1], "quiz") == 0) {
        puts("enter 'quiz -1' to view question and quiz -1 'answer' to provide a one word answer to the question");
        return EXIT_SUCCESS;
    }

    // Outputs bad flag message
    if (argc == 4 && strcmp(argv[2], "-bad") == 0 && strcmp(argv[3], "flag") == 0 && strcmp(argv[1], "quiz") == 0) {
        puts("Usage: quiz [-#] [answer]");
        puts("Try 'quiz --help' for more information");
        return EXIT_FAILURE;
    }

    puts("Invalid command or not enough arguments.");
    return EXIT_FAILURE;
}

