#include<iostream>
#include "UFO.hpp"


int main() {

	int player_choice;

	
	introduction();


	std::cout << "\nChoose the topic:\n";
	std::cout << "1 - Fruit\n";
	std::cout << "2 - Study equipment\n";
	std::cin >> player_choice;

	if (player_choice != 1 && player_choice != 2) {
		
		std::cout << "Error! Please enter the corresponding number";


	}

	else if (player_choice == 1) {

		game_play_1();
	
	}

	else if (player_choice == 2) {
		
		game_play_2();
	
	}


}