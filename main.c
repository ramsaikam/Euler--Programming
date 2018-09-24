#include <stdio.h>
#include <stdlib.h>

int sum_of_num_divide_3_or_5(){
  int sum = 0 ;
  for(int number = 0 ; number <10 ; number++){
    if (number % 3 ==0 || number % 5 == 0){
        sum += number;
    }
  }
  return sum;
}

int main()
{
    int result;
    system("cls");
    result = sum_of_num_divide_3_or_5();
    printf("The result is %d",result);
    return 0;
}
