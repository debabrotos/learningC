#include<stdio.h>
int main()
{
    int first[] = {100,2,39,47,54,64,72,84,94,100},
        second[] = {100,26,35,45,52,64,74,85,89,100},
        third[] = {50,25,34,44,55,65,73,87,94,100},
        total[10],
        i,j,mark_count[100] ;

    for( i = 0; i < 10; i++){
        total[i] = first[i]/4 + second[i]/4 + third[i]/ 2;
        printf("Roll %d\t Total Mark : %d\n", i+1, total[i]);
    };

    for ( i = 0; i <= 100; i++ ){
        mark_count[i] = 0;
    }

    for ( i = 0; i < 10; i++ ){
        mark_count[total[i]]++;
    }

    for ( i = 90; i <= 100; i++ ){
        printf("%d\n", mark_count[i]);
    }
    return 0;
}
