PROG := prog

.PHONY: build clean

build:
	em++ -o ${PROG}.js -O3 ${PROG}.cpp

clean:
	rm -rf ${PROG}.js
	rm -rf ${PROG}.wasm