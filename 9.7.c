#include<stdio.h>
int main(){
    char str1[] = "Real" ;
    char str2[] = "Madrid";
    char str3[10];
    int i, j, length1 = 4, length2 = 6;

    for (i = 0, j = 0; i < length1; i++, j++)
    {
        str3[j] = str1[i];
    }

    for (i = 0; i < length2; i++, j++)
    {
        str3[j] = str2[i];
    }
    str3[j] = '\0';
    printf("%s\n",str3);
    return 0; 
    
}