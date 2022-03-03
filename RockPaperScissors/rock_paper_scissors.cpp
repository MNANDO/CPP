#include <iostream>
#include <stdlib.h>

void prompt() {
    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";
    std::cout << "1) ✊\n";
    std::cout << "2) ✋\n";
    std::cout << "3) ✌️\n";
    std::cout << "shoot! " << std::endl;
}

int main() {
    /* initialize random seed: */
    srand (time(NULL));

    /* generate secret number between 1 and 3: */
    int computer = rand() % 3 + 1;
    int user = 0;
    bool won = false;
    
    // run the prompt
    prompt();
    std::cin >> user;
    
    // Assigning rock paper or scissor to number
    std::string rps;

    switch (computer) {
        case (1):
            rps = "rock";
            break;
        case (2):
            rps = "paper";
            break;
        case (3):
            rps = "scissors";
            break;
    }

    // logic for wining
    if (computer == 1 && user == 2
            || computer == 2 && user == 3
            || computer == 3 && user == 1) {
        won = true;
    }
    // logic for getting the same move
    while (computer == 1 && user ==1
            || computer == 2 && user == 2
            || computer == 3 && user == 3) {
        std::cout << "You got the same move, go again!" << std::endl;
        prompt();
        std::cin >> user;
    }

    if (won) {
        std::cout << "You beat " << rps << std::endl;
    } 
    else {
        std::cout << "You lost by " << rps << std::endl;
    }

    return 0;
}
