.PHONY: build clean

build:
	em++ -o reverse.wasm --no-entry -Os -s SIDE_MODULE=1 reverse.cpp

clean:
	rm -rf *.wasm