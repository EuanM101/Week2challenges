//Week 2 Challenges

#include <iostream>
#include <string>

//Task 1- Comparing strings part 1

int main(){

	//Get word 1, assign it to s1
	std::cout << "Please enter word 1! \n";
    std::string s1;
	std::cin >> s1;
	
	//Transform s1 to all lowercase for later comparison
	for (int i = 0; i<s1.length(); i++)
	{
		s1[i] = tolower(s1[i]);
	}

	//Get word 2, assign it to s2
	std::cout << "Please enter word 2! \n";
	std::string s2;
	std::cin >> s2;

	//Transform s2 to all lowercase for later comparison
	for (int i = 0; i<s2.length(); i++)
	{
		s2[i] = tolower(s2[i]);
	}

    //Compare the two strings together
	if (s1 == s2)
	//if the two strings are the same print...
	 std::cout << "This pleases Chuck Norris. \n";
	//if they are not print...
	else
		std::cout << "I pity the fool! \n";

	std::string s;
	std::cout << "Please enter a CamelCase sentence! \n";
	std::getline(cin, s)

  return 0;

}
