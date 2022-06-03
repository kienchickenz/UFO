#include<iostream>
#include<cstdlib>
#include "UFO.hpp"
#include<vector>
#include<string>

int misses;
std::vector <char> incorrect;
std::string answer;
std::string codeword;
std::string hint;
char letter;
bool guess;

void introduction() {
	std::cout << "\nPress Enter to start the game: ";
	std::cin.ignore();
	std::cin.clear();

	std::cout << "\n\n==================== ";
  	std::cout << "UFO - The Game";
  	std::cout << " ====================\n\n";
  	std::cout << "Scenario: Aliens are coming!!! Save your friend from their abduction by guessing the letters in the codeword.\n";

  	std::cout << "\nPress Enter when you are ready!\n\n";
  	std::cin.clear();
  	std::cin.ignore();

}

void display_misses(int misses) {
	
	if (misses == 0 || misses == 1) {

	    std::cout << "                 .                            \n";
	    std::cout << "                 |                            \n";
	    std::cout << "              .-\"^\"-.                       \n";
	    std::cout << "             /_....._\\                       \n";
	    std::cout << "         .-\"`         `\"-.                  \n";
	    std::cout << "        (  ooo  ooo  ooo  )                   \n";
	    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
	    std::cout << "              /     \\        (  Send help! ) \n";
	    std::cout << "             /   0   \\      / `-----------'  \n";
	    std::cout << "            /  --|--  \\    /                 \n";
	    std::cout << "           /     |     \\                     \n";
	    std::cout << "          /     / \\     \\                   \n";
	    std::cout << "         /               \\                   \n";

    }
    
    else if (misses == 2) {

	    std::cout << "                 .                            \n";
	    std::cout << "                 |                            \n";
	    std::cout << "              .-\"^\"-.                       \n";
	    std::cout << "             /_....._\\                       \n";
	    std::cout << "         .-\"`         `\"-.                  \n";
	    std::cout << "        (  ooo  ooo  ooo  )                   \n";
	    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
	    std::cout << "              /  0  \\        (  Send help! ) \n";
	    std::cout << "             / --|-- \\      / `-----------'  \n";
	    std::cout << "            /    |    \\    /                 \n";
	    std::cout << "           /    / \\    \\                    \n";
	    std::cout << "          /             \\                    \n";
	    std::cout << "         /               \\                   \n";

  	}
  	
  	else if (misses == 3) {

	    std::cout << "                 .                            \n";
	    std::cout << "                 |                            \n";
	    std::cout << "              .-\"^\"-.                       \n";
	    std::cout << "             /_....._\\                       \n";
	    std::cout << "         .-\"`         `\"-.                  \n";
	    std::cout << "        (  ooo  ooo  ooo  )                   \n";
	    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
	    std::cout << "              /--|--\\        (  Send help! ) \n";
	    std::cout << "             /   |   \\      / `-----------'  \n";
	    std::cout << "            /   / \\   \\    /                \n";
	    std::cout << "           /           \\                     \n";
	    std::cout << "          /             \\                    \n";
	    std::cout << "         /               \\                   \n";

  	}
  	
  	
  	else if (misses == 4) {

	    std::cout << "                 .                            \n";
	    std::cout << "                 |                            \n";
	    std::cout << "              .-\"^\"-.                       \n";
	    std::cout << "             /_....._\\                       \n";
	    std::cout << "         .-\"`         `\"-.                  \n";
	    std::cout << "        (  ooo  ooo  ooo  )                   \n";
	    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
	    std::cout << "              /  |  \\        (  Send help! ) \n";
	    std::cout << "             /  / \\  \\      / `-----------' \n";
	    std::cout << "            /         \\    /                 \n";
	    std::cout << "           /           \\                     \n";
	    std::cout << "          /             \\                    \n";
	    std::cout << "         /               \\                   \n";

  	}
  	
  	else if (misses == 5) {

	    std::cout << "                 .                            \n";
	    std::cout << "                 |                            \n";
	    std::cout << "              .-\"^\"-.                       \n";
	    std::cout << "             /_....._\\                       \n";
	    std::cout << "         .-\"`         `\"-.                  \n";
	    std::cout << "        (  ooo  ooo  ooo  )                   \n";
	    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
	    std::cout << "              / / \\ \\        (  Send help! )\n";
	    std::cout << "             /       \\      / `-----------'  \n";
	    std::cout << "            /         \\    /                 \n";
	    std::cout << "           /           \\                     \n";
	    std::cout << "          /             \\                    \n";
	    std::cout << "         /               \\                   \n";

 	}
 	
 	else if (misses == 6) {

	    std::cout << "                 .                            \n";
	    std::cout << "                 |                            \n";
	    std::cout << "              .-\"^\"-.                       \n";
	    std::cout << "             /_....._\\                       \n";
	    std::cout << "         .-\"`         `\"-.                  \n";
	    std::cout << "        (  ooo  ooo  ooo  )                   \n";
	    std::cout << "         '-.,_________,.-'    ,-----------.   \n";
	    std::cout << "              /     \\        (  Send help! ) \n";
	    std::cout << "             /       \\      / `-----------'  \n";
	    std::cout << "            /         \\    /                 \n";
	    std::cout << "           /           \\                     \n";
	    std::cout << "          /             \\                    \n";
	    std::cout << "         /               \\                   \n";

  	}

}

void end_game(std::string answer, int misses) {

	if(misses >= 7) {
			
		std::cout << "\nSorry, but the answer is " << codeword << ".";
		std::cout << "\nOh no! The UFO just flew away with another person!";

	}

	else if(codeword == answer) {

		std::cout << "\nThat's right, the answer is " << codeword << ".";
		std::cout << "\nHooray! You have saved the person and earned a medal of honor!";

	}

}

void display_status(std::vector <char> incorrect, std::string answer, std::string hint) {

	std::cout << "Incorrect guesses: \n";
	
	for(int i = 0; i < incorrect.size(); i++) {
		
		std::cout << incorrect[i] << " ";
	
	}

	std::cout << "\nCodeword:\n";
	
	for(int i = 0; i < answer.length(); i++) {

		std::cout << answer[i] << " ";
	}

}


void game_play_1() {

	srand(time(0));
	int indexOfCodeword = std::rand() % 10;

	switch(indexOfCodeword) {
	    case 0 : 
	      	codeword = "apple";
	      	answer = "-----";
	      	break;

	    case 1 : 
	      	codeword = "banana";
	      	answer = "------";
	      	break;

	    case 2 : 
	      	codeword = "orange";
	      	answer = "------";
	      	break;

	    case 3 : 
	      	codeword = "watermelon";
	      	answer = "----------";
	      	break;

	    case 4 : 
	     	codeword = "lemon";
	     	answer = "-----";
	   		break;

	    case 5 : 
	      	codeword = "grape";
	      	answer = "-----";
	     	break;
	    
	     case 6 : 
	      	codeword = "dragonfruit";
	      	answer = "-----------";
	     	break;

	    case 7 : 
	      	codeword = "pomelo";
	      	answer = "------";
	      	break;

	    case 8 : 
	      	codeword = "mango";
	      	answer = "-----";
	      	break;

	    case 9 : 
	      	codeword = "coconut";
	      	answer = "-------";
	      	break;	    
	}

	while(misses < 7 && answer != codeword ) {

		std::cout << "\n\n---------- Fruit ----------\n";

		display_misses(misses);

		display_status(incorrect, answer, hint);

		std::cout << "\nPlease enter your guess: \n";
		std::cin >> letter;

		for(int i = 0; i < codeword.length(); i++) {
			
			if(letter == codeword[i]) {
				
				answer[i] = letter;
				guess = true;

			}
		}

			if(guess) {
			
				std::cout << "\nCORRECT";

			}

			else {

				incorrect.push_back(letter);
				std::cout << "\nINCORRECT! The tractor beam pulls the person in further.";
				misses ++;

			}

			guess = false;

		

	}

	end_game(answer, misses);
	
}

void game_play_2() {

	srand(time(0));
	int indexOfCodeword = std::rand() % 10;

	switch(indexOfCodeword) {
	    case 0 : 
	      	codeword = "pencil";
	      	answer = "------";
	      	break;

	    case 1 : 
	      	codeword = "eraser";
	      	answer = "------";
	      	break;

	    case 2 : 
	      	codeword = "scissors";
	      	answer = "--------";
	      	break;

	    case 3 : 
	      	codeword = "pencilcase";
	      	answer = "----------";
	      	break;

	    case 4 : 
	     	codeword = "computer";
	     	answer = "--------";
	   		break;

	    case 5 : 
	      	codeword = "calculator";
	      	answer = "----------";
	     	break;
	    
	     case 6 : 
	      	codeword = "backpack";
	      	answer = "--------";
	     	break;

	    case 7 : 
	      	codeword = "compass";
	      	answer = "-------";
	      	break;

	    case 8 : 
	      	codeword = "ruler";
	      	answer = "-----";
	      	break;

	    case 9 : 
	      	codeword = "paper";
	      	answer = "-----";
	      	break;	    
	}

	while(misses < 7 && answer != codeword ) {

		std::cout << "\n\n---------- Study equipment ----------\n";

		display_misses(misses);

		display_status(incorrect, answer, hint);

		std::cout << "\nPlease enter your guess: \n";
		std::cin >> letter;

		for(int i = 0; i < codeword.length(); i++) {
			
			if(letter == codeword[i]) {
				
				answer[i] = letter;
				guess = true;

			}
		}

			if(guess) {
			
				std::cout << "\nCORRECT";

			}

			else {

				incorrect.push_back(letter);
				std::cout << "\nINCORRECT! The tractor beam pulls the person in further.";
				misses ++;

			}

			guess = false;

		

	}

	end_game(answer, misses);	
}
