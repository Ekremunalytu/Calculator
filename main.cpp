#include <iostream>
#include <cmath>

int main () {

    int Loop_Flag = 1;
    
    std::cout << "Welcome to advanced calculator" << std::endl;



    while (Loop_Flag == 1){

        double  temp1 = 0 , temp2 = 0;
        int operation_flag = 0;



        double  return_value;
        
        std::cout << "Please specify your operation" << std::endl;

        std::cout << "Enter 1  to sum" << std::endl;
        std::cout << "Enter 2  to minus" << std::endl;
        std::cout << "Enter 3  to multiply" << std::endl;
        std::cout << "Enter 4  to divide" << std::endl;
        std::cout << "Enter 5  to use exponent function(fist value is base)" << std::endl;
        std::cout << "Enter 6  to use root function(first value is base)" << std::endl;
        std::cout << "Enter 7  to use logaritmic function(fist value is Argument)" << std::endl;
        std::cin  >> operation_flag;
        if ( !( ( operation_flag  < 1 )  ||  ( operation_flag > 7 ) ) ){
            
            std::cout << "\nEnter number 1:  ";
            std::cin  >> temp1;
            
            std::cout << "\nEnter number 2:  ";
            std::cin  >> temp2;

        }

        
        if (std::cin.fail()) {
            // Handle invalid input (non-numeric input)
            std::cin.clear(); // Clear the error state of std::cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the line
            std::cout << "Invalid input. Please enter a valid number!" << std::endl;
            continue; // Restart the loop to get valid input
        }

       
        switch (operation_flag){

            case 1:

                return_value = temp1 + temp2;
                std::cout << return_value << std::endl;
                break;

            case 2:

                return_value = temp1 - temp2;
                std::cout << return_value << std::endl;
                break;

            case 3:

                return_value = temp1 * temp2;
                std::cout << return_value << std::endl;
                break;
            
            case 4:
                try{
                    if ( ( temp2 == 0 ) ){
                        throw std::runtime_error("you cant divide by 0 !!!!");
                        break;
                    }
                    
                    }
                catch ( const std::exception& e){
                    std::cout << "Exception occured:  " << e.what() << std::endl;
                }
                    return_value = temp1 / temp2;
                    std::cout << return_value << std::endl;
                    break;

            case 5:
                
                if ( temp1 == 0 && temp2 == 0){
                    throw std::domain_error("0^0 is not defined!");
                }else{
                    return_value = std::pow(temp1,temp2);
                    std::cout << return_value << std::endl;
                }
                
                break;

            case 6:

                return_value = pow ( temp1 , 1 / temp2);
                std::cout << return_value << std::endl;
            
            case 7:
                if ( log(temp1) <= 0  ){
                    std::cout << "Argument cannot be zero " << std::endl;
                    break;
                }
                if (log(temp2) <= 0 ){
                    std::cout << "Base cannot be negative nor zero " << std::endl;
                    break;
                }

                return_value = log( temp1 ) /log ( temp2 );
                std::cout << return_value << std::endl;
                break;

            default:
                std::cout << "Please enter a valid number" << std::endl;
                break;
            }

        

        std::cout << "Press 0 to quit or 1 to make another operation" << std::endl;
        std::cin >> Loop_Flag;

    }

    std::cout << "Goodbye" << std::endl;
}