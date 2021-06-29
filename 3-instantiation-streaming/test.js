const fibonacci = n => {
	if (n < 2)
		return n;
	return fibonacci(n - 1n) + fibonacci(n - 2n);
};

const FIB_OFFSET = 31;

(async () => {
	try {
		// Fetch and instantiate
		const { instance, module } = await WebAssembly.instantiateStreaming(fetch('test.wasm'));
		console.log(`Instance:`, instance);
		console.log(`3 + 16 = ${instance.exports.add(3, 16)}`);
		console.log(`Fibonacci(${FIB_OFFSET}) = ${instance.exports.fibonacci(BigInt(FIB_OFFSET))}`);

		/**
		 * The above fails if the web server doesn't correctly
		 * identify .wasm files as belonging to the application/wasm
		 * mimetype (typically wrongly served as application/octet-stream).
		 * 
		 * A hack is available inside the server folder.
		 */

		// Testing the WASM function
		console.log(`Fibonacci(${FIB_OFFSET}) (WASM):`);
		console.time('fibwasm');
		console.log(instance.exports.fibonacci(BigInt(FIB_OFFSET)));
		console.timeEnd('fibwasm');

		// Testing the JS function
		console.log(`Fibonacci(${FIB_OFFSET}) (JS):`);
		console.time('fibjs');
		console.log(fibonacci(BigInt(FIB_OFFSET)));
		console.timeEnd('fibjs');
	} catch(e) {
		console.log(e);
	}
})();