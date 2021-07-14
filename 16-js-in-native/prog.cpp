#include <iostream>
#include <emscripten/emscripten.h>

extern "C" {
	void EMSCRIPTEN_KEEPALIVE printHello() {
		// Method 1
		emscripten_run_script("alert('Hello, World!');");
		
		// Method 2
		EM_ASM(
			window.userState = prompt('How are you?');
		);
		
		// EM_ASM will also work but EM_ASM_ is preferred
		EM_ASM_({
			alert(`I like to ${this.UTF8ToString($0)} and ${this.UTF8ToString($1)}.`);
			console.log($2 + $3);
			alert(`Happy to know that you are ${window.userState || 'fine'}!`);
		}, "dance", "sing", 1, 2);

		int sumOfNumbers = EM_ASM_INT({
			return $0+ $1;
		}, 13, 100);

		std::cout << sumOfNumbers << std::endl;
	}

	// Method 3
	EM_JS(void, sayHi, (std::string name), {
		document.getElementById('msg').textContent = 'Hi ' + this.UTF8ToString(name) + '!';
	});

	int main() {
		printHello();
		sayHi("Param");
		return EXIT_SUCCESS;
	}
}