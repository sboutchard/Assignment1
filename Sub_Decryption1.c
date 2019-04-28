#include <stdio.h>
#include <stdlib.h>

void decrypt(char text[]);

int main()
{
    char text[1000];
    
    //printf("Enter text to encrypt (CAPS ONLY):"); >>if not using FILE I/O
    //scanf("%[^\n]s", text);
    
    FILE *input;
    input=*fopen(*File_Encrypt, "r");
        while (text = fgetc(inputFile)) != EOF) {
    }
    
    decrypt(text); 
    
    printf("Decrypted text: %s\n", text);
    
    return 0;
}

void decrypt(char text[]) {
    const char def[] = "TSOFUDWRNLZJXICYVHBAEQGMPK";
    for(int i=0; text[i] != '\0'; i++) {
        switch (text[i]){
            case 'T' : text[i] = 'A';
            break;
            case 'S' : text[i] = 'B';
            break;
            case 'O' : text[i] = 'C';
            break;
            case 'F' : text[i] = 'D';
            break;
            case 'U' : text[i] = 'E';
            break;
            case 'D' : text[i] = 'F';
            break;
            case 'W' : text[i] = 'G';
            break;
            case 'R' : text[i] = 'H';
            break;
            case 'N' : text[i] = 'I';
            break;
            case 'L' : text[i] = 'J';
            break;
            case 'Z' : text[i] = 'K';
            break;
            case 'J' : text[i] = 'L';
            break;
            case 'X' : text[i] = 'M';
            break;
            case 'I' : text[i] = 'N';
            break;
            case 'C' : text[i] = 'O';
            break;
            case 'Y' : text[i] = 'P';
            break;
            case 'V' : text[i] = 'Q';
            break;
            case 'H' : text[i] = 'R';
            break;
            case 'B' : text[i] = 'S';
            break;
            case 'A' : text[i] = 'T';
            break;
            case 'E' : text[i] = 'U';
            break;
            case 'Q' : text[i] = 'V';
            break;
            case 'G' : text[i] = 'W';
            break;
            case 'M' : text[i] = 'X';
            break;
            case 'P' : text[i] = 'Y';
            break;
            case 'K' : text[i] = 'Z';
            break;
            case ' ' : text[i] = ' ';
            break;
            default : printf("Error with reading file\n");
                        return;
        }
    }
}