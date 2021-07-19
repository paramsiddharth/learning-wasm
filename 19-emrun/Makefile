.PHONY: build clean run

build:
	emcc -o hello.html -s 'EXPORTED_FUNCTIONS=["_malloc", "_main"]' hello.c

clean:
	rm -rf hello.html
	rm -rf hello.js
	rm -rf hello.wasm

run:
	emrun --log_stdout stdout.log --log_stderr stderr.log --port 8080 hello.html