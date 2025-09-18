#include <iostream>
#include <cstdint>
#include <limits>

int main(int argc, char **argv)
{
    const int SMALL_ROOM_PRICE = 25;
    const int LARGE_ROOM_PRICE = 35;
    const int VALID_DAYS = 30;
    const int TAX_PERCENT = 6;
    int smallRoomNumber = 0;
    int largeRoomNumber = 0;
	std::cout<<"Hello, welcome to Nam's Carpet Cleaning Service"<<std::endl;
    while(true)
    {
        std::cout<<"\nHow many small rooms would you like cleaned? ";
        std::cin>>smallRoomNumber;
        
        if (std::cin.fail()) {  
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            std::cout << "Invalid input! Please enter a number.\n";
            continue;
        }
        
        std::cout<<"\nHow many large rooms would you like cleaned? ";
        std::cin>>largeRoomNumber;
        
        if (std::cin.fail()) {  
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); 
            std::cout << "Invalid input! Please enter a number.\n";
            continue;
        }
        
        if(smallRoomNumber < 0 || largeRoomNumber < 0 )
        {
            std::cout<<"Invalid room number! Please enter valid number!\n";
            std::cout<<"======================================="<<std::endl;
            continue;
        }
        
        std::cout<<"Succesfully Input Room Number!\n";
        break;
    }     
    std::cout<<"Estimate for carpet cleaning service\n";
    std::cout<<"Number of small room: "<<smallRoomNumber<<std::endl;
    std::cout<<"Number of large room: "<<largeRoomNumber<<std::endl;
    std::cout<<"Price per small room: "<<"$"<<SMALL_ROOM_PRICE<<std::endl;
    std::cout<<"Price per large room: "<<"$"<<LARGE_ROOM_PRICE<<std::endl;
    
    int cost = largeRoomNumber * LARGE_ROOM_PRICE + smallRoomNumber * SMALL_ROOM_PRICE;
    double tax = static_cast<double>(cost) * TAX_PERCENT/100;
    
    std::cout<<"Cost: $"<<cost<<std::endl;
    std::cout<<"Tax: $"<<tax<<std::endl;
    std::cout<<"======================================="<<std::endl;
    std::cout<<"Total estimate: $"<<static_cast<double>(cost) + tax<<std::endl;
    std::cout<<"This estimate is valid for "<<VALID_DAYS<<" days\n"<<std::endl;
	return 0;
}
