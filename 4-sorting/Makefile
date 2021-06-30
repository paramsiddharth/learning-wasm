.PHONY: build wasm native clean

build: wasm native

native: sort.exe

wasm: sort.js sort.wasm

sort.exe:
	g++ -o sort.exe -O3 sort-random-array.cpp

sort.js sort.wasm:
	em++ -o sort.js -s ALLOW_MEMORY_GROWTH=1 -O3 sort-random-array.cpp

test: wasm native
	@echo Native:
	@./sort.exe
	@echo
	@echo WASM:
	@node sort.js
	@echo
	@echo JS:
	@node sort-random-array.js

clean:
	rm -rf sort.exe
	rm -rf sort.js
	rm -rf sort.wasm