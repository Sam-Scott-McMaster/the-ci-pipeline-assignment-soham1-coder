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
puts("question 2: What is the command to check the current status of a git repository?");
}

if (strcmp(argv[1],"-3") == 0 && argc<3) {
puts("question 3: What is the command to output formatted text in C");
}

return EXIT_SUCCESS;
}

