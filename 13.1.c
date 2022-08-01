#include<stdio.h>
int main(){
    int n, i, m = 8 ;

    for (i = 0; i < 7; i++)
    {
        m-- ;
        for (n=m;n>=1;n--){
            printf ("C");

        }
        printf ("\n");
    }

    m = 6;
    for (i = 0; i < 6; i++)
    {
        m-- ;
        for (n=m;n<7;n++){
            printf ("C");

        }
        printf ("\n");
    }

}
