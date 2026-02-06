// yes contract = 0
// no contract = 1

#include <iostream>

int main(){
    //vars
    bool capital; //how much money the user puts in, AKA capital 
    std::string yes_no_contract; //the contract


    //launcher
    std::cout << "Inital Capital?: "; //inital capital 
    std::cin >> capital;

    std::cout << "Purchased 'Yes' or 'No' Contract?: "; //figures out if the user bought yes or no contract!
    std::cin >> yes_no_contract;
    
    // Figures out if the contract is a "Yes" or "No" 
    if (yes_no_contract == "Yes"|| yes_no_contract == "YES" || yes_no_contract == "y" || yes_no_contract == "Y"){
       int yes_no_contract = 0; //makes the var into a "Yes" contract
       
    }
    
    else if (yes_no_contract == "No" || yes_no_contract == "NO" || yes_no_contract == "n" || yes_no_contract == "N"){
        int yes_no_contract = 1; //makes the var into a "No contract"
    }

    else{
        std::cout << "Invaild Please Try again!";
    }




    return 0; //goodbye!
}