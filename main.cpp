#include <iostream>
#include <cmath>



int main () {

    int Loop_Flag = 1;
    
    std::cout << "Welcome to advanced calculator" << std::endl;



    while (Loop_Flag){

        int temp1 = 0 , temp2 = 0 , operation_flag = 0;
        int return_value;
        
        std::cout << "Please specify your operation" << std::endl;

        std::cout << "Enter 1  to sum" << std::endl;
        std::cout << "Enter 2  to minus" << std::endl;
        std::cout << "Enter 3  to multiply" << std::endl;
        std::cout << "Enter 4  to divide" << std::endl;

        std::cin  >> operation_flag;

        std::cout << "\nEnter number 1:  ";
        std::cin  >> temp1;
        

        std::cout << "\nEnter number 2:  ";
        std::cin  >> temp2;
        
        

        switch (operation_flag){

        case 1:

            return_value = temp1 + temp2;
            break;

        case 2:

            return_value = temp1 - temp2;
            break;

        case 3:

            return_value = temp1 * temp2;
            break;
        
        case 4:

            return_value = temp1 / temp2;
            break;
        
        default:
            break;
        }


        std::cout << return_value << std::endl;

        std::cout << "Press 0 to quit or 1 to make another operation" << std::endl;
        std::cin >> Loop_Flag;

        

        




















    }






    std::cout << "Goodbye" << std::endl;



}