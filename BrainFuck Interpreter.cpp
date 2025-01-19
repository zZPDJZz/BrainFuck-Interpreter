#include <iostream>
#include <string>

const int fucklength = 7500;
int main() {
	//int pointers and arrays
	std::cout << "Enter BrainFuck Code Here: \n";
	std::string fuckin{};
	std::cin >> fuckin;
	std::cout << "\n" << "\n";
	int inputlength = fuckin.length(), fuckout[fucklength] = { 0 }, temp = 0, writepointer = 0, bracketnum[256] = { 0 }, bracketpoint = 0;
	
	//fix multiple brackets maybe use array
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
				bracketnum [bracketpoint] = writepointer;
				bracketpoint++;
			}
			break;
		case ']':
			if (fuckout[writepointer] != 0) {
				bracketnum[bracketpoint];
			}
			else {
				bracketpoint--;
			}
			break;
			//print when called
		case '.':
			std::cout << static_cast<char>(fuckout[writepointer]);
			break;
		case ',': //figure out how to make commas work
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