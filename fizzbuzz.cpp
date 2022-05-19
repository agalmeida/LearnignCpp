//Fizz Buzz Challenge

#include <iostream>


int main(){
  int i;
  int zero=0;
  for (i=1;i!=101;i++){
    if (zero==(i%3) && zero==(i%5)){
      std::cout << "FizzBuzz\n";
    }
    else if (zero==i%3){
      std::cout << "Fizz\n";
    }
    else if (zero==i%5){
      std::cout << "Buzz\n";
    }
    else{
      std::cout << i << "\n";
    }
  }
}