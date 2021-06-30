.PHONY: build run clean

build: add.wasm

add.wasm:
# Use an underscore before the function name(s)
#	emcc -o add.wasm --no-entry -s STANDALONE_WASM -s EXPORTED_FUNCTIONS='["_add"]' add.c
# Using EMSCRIPTEN_KEEPALIVE
	emcc -o add.wasm --no-entry -s STANDALONE_WASM add.c

run: build
	python -m http.server 8080

clean:
	rm -rf *.wasm
	rm -rf *.out.*