#include <iostream>
#include <fstream>
#include <string>


int main()
{
	int x;
	std::string username;
	std::string password;
	std::string tpassword;

	std::cout << "Welcome to Isaiah's computer!\nWould you like to Login [0] or Register? [1]\n";
	std::cin >> x;
	
//The Login Field
	if (x == 0) 
	{
		std::cout << "Username :\n";
		std::cin >> username; 
		std::ifstream file((username + ".txt").c_str());
		// Searches for the file names after the user's name created in the Registration Field.

		std::cout << "Password :\n";
		std::cin >> password;
		
		file >> tpassword;
		file.close();

		if (password == tpassword)
		{
			std::cout << "Welcome, " + username + ", Login Successful!\n";
		}
		else
			std::cout << "ERROR : Password incorrect, please restart the program and try again.";
			
	}
//The Registration Field
	else if (x == 1) 
	{
		std::cout << "Choose your username :\n";
		std::ofstream file((username + ".txt").c_str());
		// Creates a text file named after the user's name. this file will contain the users password.


		std::cin >> username;
		std::cout << "Choose your password :\n";
		std::cin >> password;
		file << password;
		// The file now contains the user's password. 

		file.close();
	}
	else
		std::cout << "ERROR: try again! (unsigned integers only)";

	return 0;
} 