#include <stdio.h>
#include <stdlib.h>
#include <emscripten/emscripten.h>

EM_JS(char*, greet, (), {
	const name = prompt(`Enter your name:`);
	
	const lengthInBytes = 1 + lengthBytesUTF8(name);
	const stringInHeap = _malloc(lengthInBytes);
	stringToUTF8(name, stringInHeap, lengthInBytes);

	return stringInHeap;
});

int main() {
	char* name = greet();
	printf("Hi %s!\n", name);

	printf("This is STDOUT.\n");
	fprintf(stderr, "This is STDERR.\n");
	free(name);
}