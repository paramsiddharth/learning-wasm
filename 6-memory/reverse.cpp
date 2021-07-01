#include <emscripten/emscripten.h>

extern "C" {
	void EMSCRIPTEN_KEEPALIVE reverse(int* arr, int len) {
		for (int i = 0; i < len / 2; i++) {
			int tmp = arr[i];
			arr[i] = arr[len - 1 - i];
			arr[len - 1 -i] = tmp;
		}
	}
}