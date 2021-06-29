const express = require('express');
const path = require('path');

const app = express();

app.use(express.static(path.resolve(__dirname, '..')))
express.static.mime.types['.wasm'] = 'application/wasm';

const PORT = process.env.PORT || 8080;
app.listen(PORT, () => console.log(`Listening on port ${PORT}.`));