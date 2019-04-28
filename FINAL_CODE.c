#include <stdio.h>
#include <stdlib.h>

void rot_encrypt(char text[], int key); //rotation encrypt function

void rot_decrypt(char text[], int key); //rotation decrypt function

void sub_encrypt(char text[]); //substitution encrypt function

void sub_decrypt(char text[]); //substitution decrypt function

void flush(); //buffer function


int main()
{
    int cipher=0;
    int key;
    char text[1000];
    
    printf("Enter 1 or 2:"); 
        //Enter 1 for rotation cipher 
        //Enter 2 for substitution cipher
    
    scanf("%d", &cipher);
    
        if (cipher==1) {
            printf("Enter key:"); //the shift in the rotation cipher
            flush();
            scanf("%d", &key);

            printf("Enter text to encrypt (CAPS ONLY):");
            flush();
            scanf(" %[^\n]s ", text); //[^\n] prevents the program from terminating at whitespace
        
            rot_encrypt(text, key); //rotation encrypt function
        
            printf("\nEncrypted text: %s", text);
        
            rot_decrypt(text, key); //rotation decrypt function
        
            printf("\nDecrypted text: %s", text);
        
        }else if (cipher==2) {
            
            printf("Enter text to encrypt (CAPS ONLY):"); //>>if not using FILE I/O
            flush();
            scanf("%[^\n]s", text);
    
            //FILE *input;
            //input=*fopen(*File_Encrypt, "r");
                //while (text = fgetc(inputFile)) != EOF) {
                //}
            sub_encrypt(text);
    
            printf("Encrypted text: %s\n", text);
    
            sub_decrypt(text); 
    
            printf("Decrypted text: %s\n", text);
        }

    return 0;
}

void rot_encrypt(char text[], int key) {
    
    for(int i=0; text[i] != '\0'; i++){
        if(text[i]>='A' && text[i]<='Z'){ //parameters for the for loop
        text[i] = 65 + (text[i]-65+key)%26;
        }
    }     
}

void rot_decrypt(char text[], int key) {

    for(int i=0; text[i] != '\0'; i++) {
        if(text[i]>='A' && text[i]<='Z') {
        text[i] = 65 + (text[i]+65-key)%26; //subtract the key to decrypt (reverses encryption)
        }
    }
}

void sub_encrypt(char text[]) {
    const char def[] = "TSOFUDWRNLZJXICYVHBAEQGMPK"; //
    for(int i=0; text[i] != '\0'; i++){
        
        if( text[i] >= 'A' && text[i] <= 'Z'){
            text[i] = def[ (int)text[i] - (int)'A'];
        }else if(text[i] == ' '){
            //Nothing
        }else{
            printf("Error with reading file\n");
            return;
        }
    }
}

void sub_decrypt(char text[]) {
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

    void flush() { //buffer function
        int c;
        while ((c = getchar()) != '\n' && c != EOF && c != '\0') { }
    }
    