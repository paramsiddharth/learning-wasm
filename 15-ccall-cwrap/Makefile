.PHONY: build clean

build:
	em++ -o test.js -O3 \
	-s 'EXPORTED_RUNTIME_METHODS=["ccall", "cwrap"]' \
	-s 'EXPORTED_FUNCTIONS=["_malloc", "_free"]' \
	test.cpp

clean:
	rm -rf test.js
	rm -rf test.wasm