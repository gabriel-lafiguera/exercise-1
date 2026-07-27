#include <iostream>
using namespace std;

int main(){
    
    int userin;

    while(true){
        std::cout << "Enter Grade: \n";
        std::cout << "(enter -1 to exit)\n";
        std::cin >> userin;

        if(userin == -1){
             std::cout << "EXITED";
            break;
           
        }


        if(userin < 0 || userin > 100){
            std::cout << "Error\n";
        } else if(userin >= 90){
            std::cout << "Grade: A\n";
        } else if(userin >= 80){
            std::cout << "Grade: B\n";
        } else if(userin >= 70){
            std::cout << "Grade: C\n";
        } else if(userin >= 60){
            std::cout << "Grade: D\n";
        } else {
            std::cout << "Grade: F\n";
        }
    }

    return 0;
}