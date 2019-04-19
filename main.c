int main() {

    int key;
    char text[100];
    
        printf("Enter key:");
        scanf("%d", &key);

        printf("Enter text to encrypt (CAPS ONLY):");
        scanf("%s", text);
        
        cipher(text, key);
         
  return 0;
}

void cipher(char text[], int key) {
    
    for(int i=0; text[i] != '\0'; i++)
        text[i] = 65 + (text[i]-65+key)%26;
        printf("Encrypted text: %s\n", text);
}
