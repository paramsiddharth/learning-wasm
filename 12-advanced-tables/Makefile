.PHONY: build clean

build: table.wasm

table.wasm: FORCE
	wat2wasm table.wat -o table.wasm

clean:
	rm -rf *.wasm

FORCE: ;