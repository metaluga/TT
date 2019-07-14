#include "StringManager.h"

int main() {
	std::string input;
	getline(std::cin, input);

	std::unique_ptr<StringManager> stringManager(new StringManager);
	
	std::cout<< stringManager->getWordsNumber(input) <<std::endl;
	return 0;
}