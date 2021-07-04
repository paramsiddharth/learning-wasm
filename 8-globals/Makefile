.PHONY: build clean

build: globals.wasm

globals.wasm:
	wat2wasm globals.wat -o globals.wasm

clean:
	rm -rf *.wasm