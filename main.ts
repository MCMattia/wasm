const wasmCode = Deno.readFileSync("functions.wasm")
const wasmModule = new WebAssembly.Module(wasmCode);

const wasmInstance = new WebAssembly.Instance(wasmModule);

const snprintf_example = wasmInstance.exports.snprintf_example as CallableFunction;
console.log(snprintf_example());