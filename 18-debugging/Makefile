.PHONY: build build-sourcemap clean

build:
	emcc -o fib.js -g0 fib.c

# Other flags
# ASSERTION=1                  Tests common memory allocation problems
# ASSERTION=2                  Some additional tests
# SAFE_HEAP=1                  Additional memory checks
# DEMANGLE_SUPPORT=1           Human-readable C++ function names using stack traces
build-sourcemap:
	emcc -o fib.js -gsource-map --source-map-base http://localhost:8080/ fib.c

clean:
	rm -rf fib.wasm
	rm -rf fib.js
	rm -rf fib.html