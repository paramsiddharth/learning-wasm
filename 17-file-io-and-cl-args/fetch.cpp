#include <iostream>
#include <string>
#include <cstring>
#include <emscripten/fetch.h>

void downloadFailed(emscripten_fetch_t* fetch) {
	printf("Downloading '%s' failed, HTTP failure status code: %d.\n", fetch->url, fetch->status);
	emscripten_fetch_close(fetch);
}

void downloadSucceeded(emscripten_fetch_t* fetch) {
	printf("Finished downloading %llu bytes from URL '%s'.\n", fetch->numBytes, fetch->url);
	printf("%s\n", fetch->data);
	emscripten_fetch_close(fetch);
}

int main(int argc, const char* argv[]) {
	if (argc < 2) {
		std::cerr << "Not enough arguments!" << std::endl;
		return EXIT_FAILURE;
	}

	std::string filename = argv[1];

	emscripten_fetch_attr_t attr;
	emscripten_fetch_attr_init(&attr);
	std::strcpy(attr.requestMethod, "GET");
	attr.attributes = EMSCRIPTEN_FETCH_LOAD_TO_MEMORY;
	attr.onsuccess = downloadSucceeded;
	attr.onerror = downloadFailed;
	emscripten_fetch(&attr, filename.c_str());

	return EXIT_SUCCESS;
}