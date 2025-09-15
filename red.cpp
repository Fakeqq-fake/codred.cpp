#include <iostream>

void greetUser(std::string& name) {
      
    std::cout << "Hello, " << name << "! Welcome!" << std::endl;
}

  
int main() {
    std::string userName; 

    std::cout << "Enter your name: ";
    std::cin >> userName;

    greetUser(userName);

    return 0; 












#include <iostream>

void findMax(int a, int b) {
      
    if (a > b) {
        std::cout << "The greatest number: " << a << std::endl; 
    } else {
        std::cout << "The greatest number: " << b << std::endl;  
    }
}


int main() {
    int num1, num2;

    std::cout << "Enter the first integer: ";   
    std::cin >> num1; 

    std::cout << "Enter the second integer: ";
    std::cin >> num2; 

    findMax(num1, num2);

    return 0;   
}












#include <iostream> 

 
void isEven(int number) {
     
    if (number % 2 == 0) {
        std::cout << "true" << std::endl; 
    } else {
        std::cout << "false" << std::endl; 
    }
}

 
int main() {
    int num;

    std::cout << "Enter an integer: "; 
    std::cin >> num;

    isEven(num); 

    return 0;
}
