.PHONY: build clean

build: print.wasm

print.wasm:
	wat2wasm print.wat -o print.wasm

clean:
	rm -rf *.wasm