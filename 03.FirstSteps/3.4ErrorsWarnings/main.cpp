#include <iostream>

int main(){
   
   //Compile time error
   std::cout << "Hello Word!" << std::endl;

   //Run time error
   int value = 7/1;
   std::cout << "value : " << value << std::endl;

    return 0;
}