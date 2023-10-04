#include <stdio.h>
#include <cs50.h>
#include <string.h>

#define FILESIZE 100

int main(int argc, string argv[]){

    if(argc != 2){
        printf("Too few arguments");
        return 1;
    } else if (argc > 2){
        printf("Too many arguments");
        return 1;
    }

    string filename = argv[1];

    char aov_filename[10];

    sprintf(aov_filename, "%s.txt", filename);

    FILE *file = fopen(filename, "r");
    if(file == NULL){
        printf("File is NULL");
        return 1;
    }

    char options[FILESIZE][100];
    for(int i = 0; i < FILESIZE; i++){
        fscanf(file, "%s", options[i]);
    }
}
