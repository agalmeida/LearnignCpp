#include <iostream>
#include <cstdlib>
int main(){

  std::cout << "MAGIC 8-BALL: \n";
  srand(time(NULL));
  int ball = std::rand() % 7;

  switch (ball){
    case 0:
    std::cout << "It is certain.\n";
    break;
    case 1:
    std::cout << "It is decidedly so.\n";
    break;
    case 2:
    std::cout << "Without a doubt.\n";
    break;
    case 3:
    std::cout << "Reply hazy, try again.\n";
    break;
    case 4:
    std::cout << "My reply is no.\n";
    break;
    case 5:
    std::cout << "Don't count on it.\n";
    break;
    case 6:
    std::cout << "Hell no shorty.\n";
    break;
    default:
    std::cout << "Shit if I know.\n";
    break;
  }

return 0;

}