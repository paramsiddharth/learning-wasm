let arr = [];

console.time(`Array generation`);

for (let i = 0; i < 1e7; i++) {
	arr[i] = Math.floor(Math.random() * 1e6);
}

console.timeEnd(`Array generation`);

console.time(`Array sorting`);

arr.sort((a, b) => a - b);

console.timeEnd(`Array sorting`);