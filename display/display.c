#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]){
        if(argc != 5){
            printf("Arg")
            return 1;
        }

        int coord[8];

        for(int i = 0; argv[i] != '\0'; i++{
            coord[i] = argv[i] - 48;
        }
        
        printf("(%d,%d)", coord[1], coord[2]);
    
    )
}
