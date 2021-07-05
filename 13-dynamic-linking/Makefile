.PHONY: build clean

build: mod1.wasm mod2.wasm

mod1.wasm:
	wat2wasm mod1.wat -o mod1.wasm

mod2.wasm:
	wat2wasm mod2.wat -o mod2.wasm

clean:
	rm -rf *.wasm

FORCE: ;