#include <stdio.h>

int main() {
    FILE* input;
    int readBuff;

    input = fopen("/input.txt", "r");

    while ((readBuff = getline()) != -1){
        
    }


    fclose(input);
    return 0;
}
