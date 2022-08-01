#include <stdio.h>
#include <string.h>
int main()
{
    int i, j, length, result = 1 ;
    char pan[20];
    scanf("%s",pan);
    length = strlen(pan) ;
    j = length - 1; 

    for ( i = 0; i < length /2; i++)
    {
        if (pan[i] == pan[j])
        {
            j--;
        }
        else{
            result = 0; 
            printf("ERROR");
            break;
        }
    }
    if (result == 1)
    {
        printf("Your word is Palindrome");
    }
    
    return 0;
}