.PHONY: build build-wasm clean

# WASM=0 -> Use ASM.js instead of WASM
build:
	em++ sum.cpp -s WASM=0 -o sum.html

build-wasm:
	em++ sum.cpp -s WASM=1 -o sum.html

clean:
	-rm *.html
	-rm *.js
	-rm *.wasm