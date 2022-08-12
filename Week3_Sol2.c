#include <stdio.h>
#include <stdbool.h>
int main(){
    int num, i, check;
    while(true){
        check = 0;
        scanf("%d", &num);
        if(num == -99) { break; }
         if (num <= 1){
            printf("| %d | is not Prime number\n", num);
            continue;
        }

        for(i = 1; i <= num; i++){
            if(num%i == 0){ check += 1; }
            if(check > 2){
                printf("| %d | is not Prime number\n", num);
                break;
            }
        }
        if(check <= 2){  printf("| %d | is Prime number\n", num); }
    }
    return 0;
}