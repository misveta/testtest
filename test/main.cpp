#include <iostream>
<<<<<<< HEAD
int main() {
	std::cout << "Hello user" << std::endl;
	std::cin.get();
}
=======
#include <string>
std::string ask_user_name() {
	std::cout << "Enter user name:";
	std::string user_name;
	std::cin >> user_name;
	return user_name;
}
int main() {
	std::cout << "Hello, " << ask_user_name() << "!" << std::endl;
}
>>>>>>> b6a8a7545d30edd6d92a4feb8260cf85eb5fb566
