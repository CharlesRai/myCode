#include <stdio.h>
#include <string.h>

#define FILESIZE 4000

int main(int argc, char *argv[]){

    if(argc != 2){
        printf("Too few arguments");
        return 1;
    } else if (argc > 2){
        printf("Too many arguments");
        return 1;
    }

    char filename[5];

    for(int i = 0; i < 5; i++){
        filename[i] = argv[1][i];
    }
    

    char aov_filename[100];

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
