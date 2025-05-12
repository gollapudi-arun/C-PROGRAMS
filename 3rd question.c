#include <stdio.h>
#include <string.h>
#include <ctype.h>
// Function to check if a string is a keyword
int isKeyword(char str[]) 
{
    char keywords[][10] = {"int","float","char","if","else","for","while","return"};
    int i;
    for(i=0;i<sizeof(keywords)/sizeof(keywords[0]);i++) 
    {
        if (strcmp(str,keywords[i])==0) 
        {
            return 1;
        }
    }
    return 0;
}
int main() 
{
    char input[100];
    printf("Enter a string: ");
    fgets(input,sizeof(input),stdin);
    char *token=strtok(input," \t\n+-*/=;(){}");
    while (token!=NULL) 
    {
        if(isKeyword(token)) 
        {
            printf("Keyword: %s\n",token);
        }
        else if(isdigit(token[0])) 
        {
            printf("Constant: %s\n",token);
        }
        else if(isalpha(token[0])) 
        {
            printf("Identifier: %s\n",token);
        }
        else 
        {
            printf("Unknown token: %s\n",token);
        }
        token=strtok(NULL," \t\n+-*/=;(){}");
    }
    return 0;
}
