#include <iostream>
#include "window.h"

int main() {
	std::cout << "Creating window";

	Window* pWindow = new Window();

	bool running = true;

	while (running) {
		if (!pWindow->ProcessMessages()) {
			std::cout << "Closing Window";
			running = false;
		}
		//render
		Sleep(10);
	}
	delete pWindow;

	return 0;
}