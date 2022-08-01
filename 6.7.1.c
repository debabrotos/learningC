#include<stdio.h>
int main()
{
    int first[] = {100,2,39,47,54,64,72,84,94,100},
        second[] = {100,26,35,45,52,64,74,85,59,100},
        third[] = {50,25,34,44,55,65,73,87,94,100},
        total[10],
        i,marks,count ;

    for( i = 0; i < 10; i++){
        total[i] = first[i]/4 + second[i]/4 + third[i]/ 2;
        printf("Roll %d\t Total Mark : %d\n", i+1, total[i]);
    };

    for ( marks = 80; marks <= 100; marks++ ){
        count = 0;
        for (i = 0; i < 10; i++ ){
            if( total[i] == marks ){
                count++;
            }
        }
        printf( "%d : %d\n", marks, count );
    }

}
