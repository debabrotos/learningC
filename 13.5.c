#include<stdio.h>
#include<string.h>
int main(){
    int i, j, len;
    scanf("%s", word);
    len = strlen(word);
    char word[len], reverse_word[len];

    for ( i = 0, j = len - 1 ; i < len; i++, j--)
    {
        reverse_word[i] = word[j]; 
    }
    // reverse_word[i] = '\0';
    printf("The reverse word is : %s\n",reverse_word);

    if (0 == strcmp(word, reverse_word))
    {
        printf("%s is a palindrome. \n", word);
    }
    else{
        printf("%s is Not a palindrome. \n", word);
    }
    return 0;
}