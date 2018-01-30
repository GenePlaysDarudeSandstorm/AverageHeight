#include <iostream>

int main(int argc, const char * argv[]) {
    int feet;
    int inches;
    int totalInches;
    while(true){
        std::cout << "Enter your height in formate feet [space] inches: ";
        std::cin >> feet >> inches;
        totalInches = feet * 12 + inches;
        std::cout << totalInches << std::endl;
    }
    return 0;
}
