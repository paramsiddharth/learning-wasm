#include <emscripten/emscripten.h>
#include <iostream>

extern "C" {
	int EMSCRIPTEN_KEEPALIVE add(int a, int b) {
		return a + b;
	}
	
	long long EMSCRIPTEN_KEEPALIVE fibonacci(int n) {
		if (n < 2)
			return n;
		return fibonacci(n - 1) + fibonacci(n - 2);
	}

	void EMSCRIPTEN_KEEPALIVE sayHello() {
		std::cout << "Hello, World!" << std::endl;
	}
}