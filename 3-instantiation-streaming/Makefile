.PHONY: run

# Runs on port 8080
# Required to avoid CORS violation while using
# the fetch API to retrieve the WASM module
run: server/node_modules
	cd server && npm start

server/node_modules:
	cd server && npm ci