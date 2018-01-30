#include <iostream>

int main(int argc, const char * argv[]) {
    std::string line;
    while(line.compare("exit") != 0){
        std::cout << "Enter your height : ";
        std::getline (std::cin,line);
        std::cout << "You entered, " << line << "!\n";
    }
    return 0;
}
