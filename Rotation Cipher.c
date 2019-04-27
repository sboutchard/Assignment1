#include <stdio.h>

void encrypt(char text[], int key);

void decrypt(char text[], int key);

int main() {

    int key;
    char text[100];
    
        printf("Enter key:");
        scanf("%d", &key);

        printf("Enter text to encrypt (CAPS ONLY):");
        scanf(" %[^\n]s ", text);
        
        encrypt(text, key);
        
        printf("\nEncrypted text: %s", text);
        
        decrypt(text, key);
        
        printf("\nDecrypted text: %s", text);
        
  return 0;
}

void encrypt(char text[], int key) {
    
    for(int i=0; text[i] != '\0'; i++){
        if(text[i]>='A' && text[i]<='Z'){
        text[i] = 65 + (text[i]-65+key)%26;
        }
    }
        
}

void decrypt(char text[], int key) {

    for(int i=0; text[i] != '\0'; i++) {
        if(text[i]>='A' && text[i]<='Z') {
        text[i] = 65 + (text[i]+65-key)%26; //subtract the key in order to decrypt
        }
    }

}