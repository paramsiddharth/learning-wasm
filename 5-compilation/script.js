(async () => {
	try {
		const { instance, module } = await WebAssembly.instantiateStreaming(fetch('add.wasm'));

		console.log(instance, module);
		console.log(`1 + 2 = ${instance.exports.add(1, 2)}`);
	} catch(e) {
		console.log(e);
	}
})();