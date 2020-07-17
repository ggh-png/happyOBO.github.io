---
title: "[Webassembly] syntax/semantic"
date: 2020-07-17 16:03:28 -0400
categories: webassembly
---
# instruction & semantic of inst
![keynote01](./../assets/images/wasm/wasm.001.jpeg)
## numeric instruction
```
nn,mm : # of bits
sx : unsigned / signed
iunop : operand having one integer type var
ibinop : operand having two integer type var
irelop / frelop : logic operand having integer/float type var
```
![keynote02](./../assets/images/wasm/wasm.002.jpeg)
drop : pop post of stack
![keynote03](./../assets/images/wasm/wasm.003.jpeg)

![keynote04](./../assets/images/wasm/wasm.004.jpeg)
![keynote05](./../assets/images/wasm/wasm.005.jpeg)
br : break
![keynote06](./../assets/images/wasm/wasm.006.jpeg)

![keynote07](./../assets/images/wasm/wasm.007.jpeg)
![keynote08](./../assets/images/wasm/wasm.008.jpeg)
![keynote09](./../assets/images/wasm/wasm.009.jpeg)
![keynote10](./../assets/images/wasm/wasm.010.jpeg)
![keynote11](./../assets/images/wasm/wasm.011.jpeg)
![keynote12](./../assets/images/wasm/wasm.012.jpeg)
![keynote13](./../assets/images/wasm/wasm.013.jpeg)
![keynote14](./../assets/images/wasm/wasm.014.jpeg)
newly version have local.get
![keynote15](./../assets/images/wasm/wasm.015.jpeg)
It can be prefix or postfix.