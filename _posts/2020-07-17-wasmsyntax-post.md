---
title: "[Webassembly] syntax/semantic"
date: 2020-07-17 16:03:28 -0400
categories: webassembly
---
# instruction & semantic of inst
![keynote01](./wasm/wasm.001.jpeg)
## numeric instruction
```
nn,mm : # of bits
sx : unsigned / signed
iunop : operand having one integer type var
ibinop : operand having two integer type var
irelop / frelop : logic operand having integer/float type var
```
![keynote02](./wasm/wasm.002.jpeg)
drop : pop post of stack
![keynote03](./wasm/wasm.003.jpeg)

![keynote04](./wasm/wasm.004.jpeg)
![keynote05](./wasm/wasm.005.jpeg)
br : break
![keynote06](./wasm/wasm.006.jpeg)

![keynote07](./wasm/wasm.007.jpeg)
![keynote08](./wasm/wasm.008.jpeg)
![keynote09](./wasm/wasm.009.jpeg)
![keynote10](./wasm/wasm.010.jpeg)
![keynote11](./wasm/wasm.011.jpeg)
![keynote12](./wasm/wasm.012.jpeg)
![keynote13](./wasm/wasm.013.jpeg)
![keynote14](./wasm/wasm.014.jpeg)
newly version have local.get
![keynote15](./wasm/wasm.015.jpeg)
It can be prefix or postfix.