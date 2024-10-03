#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {


if (argc>3 && strcmp(argv[2],"-1") == 0 && strcmp(argv[1],"quiz") == 0){

    if (strcmp(argv[3], "touch") == 0){
        puts("correct");
        return EXIT_SUCCESS;
    }

    else{
        puts("incorrect");
        return EXIT_SUCCESS;
    }

}

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
if (strcmp(argv[1],"quiz") == 0 && argc == 2) {
puts("Usage: quiz [-#] [answer]");
puts("Try 'quiz --help' for more information");
}

if (strcmp(argv[2],"-1") == 0 && argc<4 && strcmp(argv[1],"quiz") == 0) {
puts("question 1: What is the command to create a new file?");
}
if (strcmp(argv[2],"-2") == 0 && argc<4 && strcmp(argv[1],"quiz") == 0) {
puts("question 2: What is the command to check the current status of a git repository? (the word you enter after 'git')");
}

if (strcmp(argv[2],"-3") == 0 && argc<4 && strcmp(argv[1],"quiz") == 0) {
puts("question 3: What is the command to output formatted text in C");
}

if (strcmp(argv[2],"--help") == 0 && argc<4 && strcmp(argv[1],"quiz") == 0) {
puts("enter 'quiz -1' to view question and quiz -1 'answer' to provide a one word answer to the question");
}

return EXIT_SUCCESS;
}

