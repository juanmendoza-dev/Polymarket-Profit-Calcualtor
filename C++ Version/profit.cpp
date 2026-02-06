// yes contract = 0
// no contract = 1

#include <iostream>

int main(){

    bool capital;
    std::string yes_no_contract;

    //launcher
    std::cout << "Inital Capital?: "; //inital capital 
    std::cin >> capital;

    std::cout << "Purchased 'Yes' or 'No' Contract?: "; //figures out if the user bought yes or no contract!
    std::cin >> yes_no_contract;
    
    if (yes_no_contract == "Yes"|| yes_no_contract == "YES" || yes_no_contract == "y" || yes_no_contract == "Y"){
       int yes_no_contract = 0; //makes the var into a "Yes" contract
    }
    



    return 0; //goodbye!
}