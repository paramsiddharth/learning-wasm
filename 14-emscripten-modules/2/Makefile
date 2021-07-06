.PHONY: build clean

build: test.js

test.js: FORCE
	em++ -o test.js -O3 test.cpp

clean:
	rm -rf test.wasm
	rm -rf test.js

FORCE: ;