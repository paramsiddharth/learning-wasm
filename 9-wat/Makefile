TARGET := add

.PHONY: build clean

build: $(TARGET).wasm

$(TARGET).wasm:
	wat2wasm $(TARGET).wat -o $(TARGET).wasm

clean:
	rm -rf $(TARGET).wasm