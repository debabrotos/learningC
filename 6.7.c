#include<stdio.h>
int main()
{
    int first[] = {100,2,39,47,54,64,72,84,94,100},
        second[] = {100,26,35,45,52,64,74,85,59,100},
        third[] = {50,25,34,44,55,65,73,87,94,100},
        total[10],
        markCount[21],
        i;

    for( i = 0; i < 10; i++){
        total[i] = first[i]/4 + second[i]/4 + third[i]/ 2;
        printf("Roll %d\t Total Mark : %d\n", i+1, total[i]);
    };

    for(int i=0; i<=21; i++){
        markCount[i] = 0;
    }

    for( i = 0; i < 10; i++){
        if(total[i]>=80 && total[i]<=100){
            markCount[(int)total[i]-80]++;
        }
    };

    for(int i=0; i<21; i++){
        printf("%d : %d\n",i+80,markCount[i]);
    }

}
