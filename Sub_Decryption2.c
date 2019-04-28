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
        
        if( text[i] >= 'A' && text[i] <= 'Z'){
            text[i] = def[text[i] - 65];
        }else if(text[i] == ' '){
            //Nothing
        }else{
            printf("Error with reading file\n");
            return;
        }
    }
}