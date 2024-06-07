#include <stdio.h>

int Maximum(int first_number, int second_number){
   int result = first_number > second_number ? first_number : second_number;
   return  result;
}

int main() {
    int a = 15, b = 10;
    printf("The greater number is %d\n", Maximum(a,b));
    return 0;
}
