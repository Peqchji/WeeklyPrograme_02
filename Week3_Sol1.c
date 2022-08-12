#include <stdio.h>
#include <math.h>
int main(){
    int num, i, check;
    double SQRT_num;
    while(1){
        check = 1;
        scanf("%d", &num);
        if (num == -99) { break; }
        if(num<1){
            printf("Input must be more than 1\n");
            continue;
        }
        SQRT_num = floor(sqrt(num));
        if (num == 1){
            printf("| %d | is not Prime number\n", num);
            continue;
        }
        if (num == 2 || num == 3){
            printf("| %d | is Prime number\n", num);
            continue;
        }
        
        for(i = 2; i<=SQRT_num; i++){
            if(num%i == 0){
                check = 0;
                break;   
            }
        }
        if (check == 0) { printf("| %d | is not Prime number\n", num); }
        else { printf("| %d | is Prime number\n", num); }
    }
    return 0;
}