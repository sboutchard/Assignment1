#include <stdio.h>

void encrypt(char text[], int key);

void decrypt(char text[], int key);

int main() {

    int key;
    char text[100];
    
        printf("Enter key:"); //the shift in the rotation cipher
        scanf("%d", &key);

        printf("Enter text to encrypt (CAPS ONLY):");
        scanf(" %[^\n]s ", text); //[^\n] prevents the program from terminating at whitespace
        
        encrypt(text, key); //encrypt function
        
        printf("\nEncrypted text: %s", text);
        
        decrypt(text, key); //decrypt function
        
        printf("\nDecrypted text: %s", text);
        
  return 0;
}

void encrypt(char text[], int key) {
    
    for(int i=0; text[i] != '\0'; i++){
        if(text[i]>='A' && text[i]<='Z'){ //parameters for the for loop
        text[i] = 65 + (text[i]-65+key)%26;
        }
    }
        
}

void decrypt(char text[], int key) {

    for(int i=0; text[i] != '\0'; i++) {
        if(text[i]>='A' && text[i]<='Z') {
        text[i] = 65 + (text[i]+65-key)%26; //subtract the key to decrypt (reverses encryption)
        }
    }

}