#include <iostream>

using namespace std;

int sum_3_and_5(){
 int  sum = 0;
 for(int number = 0 ; number < 1000 ; number++){
    if (number % 3 == 0 || number % 5 == 0){
        sum += number;

    }

 }
 return sum;
}
int main()
{
     int result;
     result = sum_3_and_5();
     cout<< result;

     return 0;
}
