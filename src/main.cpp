#include <iostream>
#include <stack>

template <class T>
class MyObject {
    T objectArray [2];
public:
    void setObject1(T o1){
        objectArray[0] = o1;
    }
    void setObject2(T o2){
        objectArray[1] = o2;
    }
    void printObject(){
        std::cout << objectArray[0] << " " << objectArray[1] << std::endl;
    }
};


int main(int argc, const char * argv[]) {
    MyObject<char> myObject1;
    myObject1.setObject1('s');
    myObject1.setObject2('s');
    myObject1.printObject();
    
    std::stack<> intStack;
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    return 0;
}
