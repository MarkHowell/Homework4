#include <string>
#include <iostream>

class LabelGenerator {
	int currentNumber;
	int startingNumber;
	std::string LabelPrefix;
public:
	LabelGenerator(const std::string&, int);
	std::string next_label(void);
};



LabelGenerator::LabelGenerator(const std::string & prefix, int start)
{
	startingNumber = start;
	currentNumber = start;
	LabelPrefix = prefix;
}

std::string LabelGenerator::next_label()
{

	return (LabelPrefix + std::to_string(currentNumber++));
}




int main()
{

	// Read in first line of input and extract number of tests
	int numOfTests;
	std::cin >> numOfTests;

	// Loop through number of tests
	for (int i = 0; i < numOfTests; ++i)
	{
		
		std::string currentPrefix;
		int startingNumber;
		int finalNumber;
		
		// Return character is next character, read it to toss it before reading the prefix line
		char a;
		std::cin.get(a);
		
		getline(std::cin, currentPrefix);
		std::cin >> startingNumber;
		std::cin >> finalNumber;

		std::cout << "Case " << i << ":" << std::endl;
		LabelGenerator currentLabel(currentPrefix, startingNumber);
		for (int j = startingNumber; j <= finalNumber; ++j) {

			std::cout << currentLabel.next_label();
			if (j < finalNumber)
				std::cout << " ";
		}
	
		std::cout << std::endl;
		
	}

	return 0;

}


//LabelGenerator point_numbers("P", 0);
//for (int i = 0; i < 3; i++) {
//	std::cout << point_numbers.next_label() << " ";
//}