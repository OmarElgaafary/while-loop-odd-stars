#include <iostream>



void whileloop();


int main() {

	whileloop();

	return 0;

}


void whileloop() {

	int i = 1;
		while (i <= 6) {
			for (int x = 1; x <= 6 - i; x++) {
				std::cout << " ";
			}
			for (int j = 1; j <= i*2-1; j++) {
				std::cout << "*";
			}
			std::cout << std::endl;
			i++;
		}
}
