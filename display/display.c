#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
        if(argc != 9){
            printf("Arg\n");
            return 1;
        }

        int xcoord[4];
        int ycoord[4];

        for(int i = 1; argv[i+4] != NULL; i++){
            xcoord[i-1] = *argv[i] - 48;
            ycoord[i-1] = *argv[i+4] - 48;
            printf("(%d,%d)\n", xcoord[i-1], ycoord[i-1]);

        }
}
