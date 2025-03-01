// lcpp_ch1_quiz.cpp : Defines the entry point for the application.
//

#include <iostream>

int main()
{
	int first_user_input{ };
	int second_user_input{ };

	std::cout << "Enter an integer: ";
	std::cin >> first_user_input;

	std::cout << "Enter another integer: ";
	std::cin >> second_user_input;

	std::cout << first_user_input << " + " << second_user_input << " = " 
		<< first_user_input + second_user_input << ".\n";
	std::cout << first_user_input << " - " << second_user_input << " = " 
		<< first_user_input - second_user_input << ".\n";
	
	return 0;
}