.PHONY: build clean

build: test.js

test.js: FORCE
# MODULARIZE=1 ensures the global Module object is a function returning
# a Promise rather than the module itself (which initialized with a delay)
	em++ -o test.js -O3 -s MODULARIZE=1 test.cpp

clean:
	rm -rf test.wasm
	rm -rf test.js

FORCE: ;