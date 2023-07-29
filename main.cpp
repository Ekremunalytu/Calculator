#include <iostream>
#include <cmath>



int main () {

    int Loop_Flag = 1;
    
    std::cout << "Welcome to advanced calculator" << std::endl;



    while (Loop_Flag){

        double  temp1 = 0 , temp2 = 0;
        int operation_flag = 0;



        double  return_value;
        
        std::cout << "Please specify your operation" << std::endl;

        std::cout << "Enter 1  to sum" << std::endl;
        std::cout << "Enter 2  to minus" << std::endl;
        std::cout << "Enter 3  to multiply" << std::endl;
        std::cout << "Enter 4  to divide" << std::endl;

        std::cin  >> operation_flag;

        
        if (std::cin.fail()) {
            // Handle invalid input (non-numeric input)
            std::cin.clear(); // Clear the error state of std::cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the rest of the line
            std::cout << "Invalid input. Please enter a valid number!" << std::endl;
            continue; // Restart the loop to get valid input
        }


        
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