#include <stdio.h>
#include <string.h>

void canvas(int xcoord[], int ycoord[]);

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
        }

        canvas(xcoord, ycoord);
}

void canvas(int xcoord[], int ycoord[]){
    for(int y = 0; y < 4; y++){
        for(int x = 0; x < 4; x++){
            if(xcoord[x] == x && ycoord[y] == y){
                printf("#");
            }
            else
            {
            printf(" ");
            }
        }
        printf("\n");
    }
}
