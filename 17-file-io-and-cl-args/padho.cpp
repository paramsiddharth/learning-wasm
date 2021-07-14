#include <iostream>
#include <fstream>

int main(int argc, const char* argv[]) {
	if (argc < 2) {
		std::cerr << "Not enough arguments!" << std::endl;
		return EXIT_FAILURE;
	}

	std::string filename = argv[1];

	try {
		std::ifstream file(filename);

		// Read the entire file into a string.
		std::string content;
		file.seekg(0, std::ios::end);
		content.resize(file.tellg());
		file.seekg(0, std::ios::beg);
		file.read(&content[0], content.size());
		file.close();

		// Display the string
		std::cout << content << std::endl;
	} catch(...) {
		std::cerr << "Failed to open file '" << filename <<"'!" << std::endl;
	}
	return EXIT_SUCCESS;
}