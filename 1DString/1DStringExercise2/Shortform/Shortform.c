//Accept a sentence in string and display its short form
/* I/P: State Bank Of India
   O/P: SBI
*/   
   
   
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter the sentence: ");
    
    scanf(" %[^\n]", str);

    printf("Short form: ");

    
    if (str[0] >= 'a' && str[0] <= 'z') {
        printf("%c", str[0] - 32);
    } else if (str[0] >= 'A' && str[0] <= 'Z') {
        printf("%c", str[0]);
    }

    
    for (int i = 1; str[i] != '\0'; i++) {
        
        if (str[i] == ' ' && str[i+1] != ' ' && str[i+1] != '\0') {
            char next_char = str[i+1];
            if (next_char >= 'a' && next_char <= 'z') {
                next_char = next_char - 32; // 
            }
            printf("%c", next_char);
        }
    }
    printf("\n");

    return 0;
}
