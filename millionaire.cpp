#include <iostream>

int main() {

	char answer;
	int score = 0;

	std::cout << "Who Wants To Be A Millionaire\n\n";

	std::cout << "Question 1\n\n";
	
	std::cout << "What Frame does Mr. Game and Watch Up B 'Fire' come out Out of Shield?\n\n";

	std::cout << "A. Frame 3   B. Frame 6  \n";
	std::cout << "C. Frame 5   D. Frame 11\n\n";

	std::cout << "Enter your answer: \n";
	std::cin >> answer;

	if (answer == 'A' || answer == 'a') {

		score = score + 100;
		std::cout << "Correct!\n";
	}
}