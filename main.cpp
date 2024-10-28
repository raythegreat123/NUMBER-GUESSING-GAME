/*
 This is a number guessing game
 By Ray, a beginner C++ Developer!
 Please feel free to fix any bugs you find
 Or even improve it!

 If you want your improvement to be implemented
 Feel free to let me know through my email:
 raymurimi13@gmail.com

 IGNORE THIS:
  Cxd = 5Fd32sKd3w2
*/

#include <iostream>
#include <ctime>

void getUserInput(int number);

int main()
{
    srand(time(0));
    int r_num = rand() % 10;

    getUserInput(r_num);
}

void getUserInput(int number){
    std::cout << "*** Guess the number ***\n";
    std::cout << "Instructions: \n";
    std::cout << "This program will generate a random \nnumber within the range of 1 - 10 \nand you have to guess it. \nYour tries will be counted.\n";

    int guess;
    int tries = 1;
    int close;

    do {

        std::cout << "Enter your guess: \n";
        std::cin >> guess;

        if (guess != number){
            std::cout << "That was not a correct guess\n";
            tries++;
        } else {
            std::cout << "The number of tries was " << tries << "\n";
            std::cin >> close;
        }
    } while(guess != number);

}