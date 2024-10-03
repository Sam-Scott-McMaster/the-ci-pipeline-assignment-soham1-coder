#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {


if (argc>2 && strcmp(argv[1],"-1") == 0){

    if (strcmp(argv[2], "touch") == 0){
        puts("correct");
        return EXIT_SUCCESS;
    }

    else{
        puts("incorrect");
        return EXIT_SUCCESS;
    }

}

if (argc>2 && strcmp(argv[1],"-2") == 0){

    if (strcmp(argv[2], "status") == 0){
        puts("correct");
        return EXIT_SUCCESS;
    }

    else{
        puts("incorrect");
        return EXIT_SUCCESS;
    }

}
if (argc>2 && strcmp(argv[1],"-3") == 0){

    if (strcmp(argv[2], "printf") == 0){
        puts("correct");
        return EXIT_SUCCESS;
    }

    else{
        puts("incorrect");
        return EXIT_SUCCESS;
    }

}

if (strcmp(argv[1],"-1") == 0 && argc<3) {
puts("question 1: What is the command to create a new file?");
}
if (strcmp(argv[1],"-2") == 0 && argc<3) {
puts("question 2: What is the command to check the current status of a git repository? (the word you enter after 'git')");
}

if (strcmp(argv[1],"-3") == 0 && argc<3) {
puts("question 3: What is the command to output formatted text in C");
}

if (strcmp(argv[1],"--help") == 0 && argc<3) {
puts("heres some help: enter '-1' to view question and -1 'answer' to provide an answer to the question");
}

return EXIT_SUCCESS;
}

