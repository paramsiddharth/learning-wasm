.PHONY: web native clean fetch

web:
	em++ -o padho.html --post-js post.js --embed-file hello.txt padho.cpp

fetch:
	em++ -o fetch.html --post-js post.js -s FETCH=1 fetch.cpp

native:
	g++ -o padho.exe padho.cpp

clean:
	rm -rf *.exe
	rm -rf padho.js
	rm -rf fetch.js
	rm -rf *.wasm
	rm -rf *.html