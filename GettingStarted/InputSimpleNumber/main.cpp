#include <iostream>
#include <limus

int main(int argc, char **argv)
{
    std::cout<<"Enter your favorite number between 1 and 100: ";
    int inputNumber = -1;

    while(inputNumber < 1){
        std::cin>>inputNumber;

        if(inputNumber < 1 || inputNumber > int.MaxValue){
            std::cout<<"Invalid number"<<std::endl;
            continue;
        }
    }

    std::cout<<"Amazing!! That's my favorite number too!"<<std::endl;
    std::cout<<"No really!!, "<<inputNumber<<" is my favorite number!"<<std::endl;
    
    return 0;
}
