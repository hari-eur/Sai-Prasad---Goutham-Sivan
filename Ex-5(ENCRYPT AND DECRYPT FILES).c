//ENCRYPT AND DECRYPT FILES IN C
#include <stdio.h>
#include <stdlib.h>

#define MAX_FILENAME_LEN 100

void cipher(char *input_filename, char *output_filename, char key) {
    FILE *file1 = fopen(input_filename, "r");
    FILE *file2 = fopen(output_filename, "w");
    
    int c;
    while ((c = fgetc(file1)) != EOF) {
        fputc(c ^ key, file2);
    }
    
    fclose(file1);
    fclose(file2);
}

int main() {
    char choice;
    char input_filename[MAX_FILENAME_LEN], output_filename[MAX_FILENAME_LEN];
    char key;
    
    while (1) {
        printf("E to encrypt, D to decrypt, Q to quit: ");
        scanf(" %c", &choice);
        if (choice == 'Q') {
            break;
        }
        
        printf("Enter file name: ");
        scanf("%s", input_filename);
        
        if (choice == 'E') {
            printf("Enter the output file name for the encrypted file: ");
            scanf("%s", output_filename);
            printf("Enter the key: ");
            scanf(" %c", &key);
            
            cipher(input_filename, output_filename, key);
            printf("Encrypted file created: %s\n", output_filename);
        }
        else if (choice == 'D') {
            printf("Enter the output file name for the decrypted file: ");
            scanf("%s", output_filename);
            printf("Enter the key: ");
            scanf(" %c", &key);
            
            cipher(input_filename, output_filename, key);
            printf("Decrypted file created: %s\n", output_filename);
        }
        else {
            printf("Invalid choice\n");
        }
    }
    
    return 0;
}