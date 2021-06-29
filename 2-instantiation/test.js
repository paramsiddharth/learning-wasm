(async () => {
	try {
		// Fetch the WebAssembly module
		const wasmFile = await fetch('test.wasm');

		// Create an Array Buffer
		const buffer = await wasmFile.arrayBuffer();

		// Instantiantiate the module
		const { instance, module } = await WebAssembly.instantiate(buffer);
		console.log(`Instance:`, instance);
		console.log(`3 + 16 = ${instance.exports.add(3, 16)}`);
		console.log(`Fibonacci(11) = ${instance.exports.fibonacci(BigInt(11))}`);
	} catch(e) {
		console.log(e);
	}
})();