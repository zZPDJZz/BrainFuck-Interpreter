#include <iostream>
#include <string>

const int fucklength = 7500;


int main() {
	//int pointers and arrays
	std::cout << "Enter BrainFuck Code Here: \n";
	int writepointer = 0;
	int inputlength = 0;
	std::string fuckin{};
	std::cin >> fuckin;
	inputlength = fuckin.length();
	int fuckout[fucklength] = { 0 };
	int temp = 0;
	std::cout << "\n" << "\n";
	for (int iteration = 0; iteration < inputlength; iteration++) {
		char currentchar = fuckin[iteration];
		//run functions for brainfuck
		switch (currentchar) {
		case '+':
			fuckout[writepointer]++;
			break;
		case '-':
			fuckout[writepointer]--;
			break;
		case '<':
			writepointer--;
			break;
		case '>':
			writepointer++;
			break;
		case '[':
			if (fuckout[writepointer] != 0) {
				temp = iteration;
			}
			break;
		case ']':
			if (fuckout[writepointer] != 0) {
				iteration = temp;
			}
			else {
			}
			break;
			//print when called
		case '.':
			std::cout << static_cast<char>(fuckout[writepointer]);
			break;
		case ',':
			break;
			//blank = cycle iteration
		default:
			break;
		}
	}
	//clean
	std::cout << "\n" << "\n";
	return 0;
}