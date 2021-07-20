#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char text[1000]; int words = 1, sentences = 0, i;  // setting boundary of maximum 1000 characters

    puts("Write your text here:\n\n");
    gets(text);                                        // getting text from user

    for(i = 0; i < strlen(text); i++)
    {
        switch(text[i])
        {
            case ' ': words = words + 1;               // where there is blank space counts a word
                      break;
            case '.':                                  // where there is ./?/! counts a sentence
            case '!':
            case '?': sentences = sentences + 1;
        }
    }

    printf("\n\n\nwords: %d\nsentences: %d\n", words, sentences);

    return 0;
}
