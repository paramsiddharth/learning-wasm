#include <emscripten/emscripten.h>

int EMSCRIPTEN_KEEPALIVE fibonacci(n)
int n;
{
	if (n < 2)
		return n;
	int a = 0, b = 1;
	while (n --> 1) {
		b += a;
		a = b - a;
	}
	return b;
}