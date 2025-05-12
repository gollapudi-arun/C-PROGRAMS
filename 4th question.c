#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char* encode(const char *src) 
{
    int src_len=strlen(src);
    if(src_len==0) 
	{
        return strdup("");
    }
    char *dest=(char*)malloc(2*src_len*sizeof(char)+1);
    if(dest==NULL) 
	{
        return NULL;
    }
    int i=0,j=0;
    while(i<src_len) 
	{
        char current_char=src[i];
        int count=1;
        i++;
        while(i<src_len&&src[i]==current_char) 
		{
            count++;
            i++;
        }
        if(count==1)
		{
          dest[j++]=current_char;
        } 
		else 
		{
          dest[j++]=count+'0';
          dest[j++]=current_char;
        }
    }
    dest[j]='\0';
    return dest;
}
int main() 
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    char *encoded_str=encode(str);
    printf("Encoded string: %s\n",encoded_str);
    free(encoded_str);
    return 0;
}
