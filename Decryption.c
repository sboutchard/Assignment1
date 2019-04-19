#include <stdio.h>

void decrypt(char text[], int key);

int main() {

    int key;
    char text[100];
    
        printf("Enter key:");
        scanf("%d", &key);

        printf("Enter text to decrypt (CAPS ONLY):");
        scanf("%s", text);
        
        decrypt(text, key);
         
  return 0;
}

void decrypt(char text[], int key);

    for(int i=0; text[i] != '\0'; i++)
        text[i] = 65 + (text[i]-65-key)%26; //subtract the key in order to decrypt
        printf("Encrypted text: %s\n", text);
}


