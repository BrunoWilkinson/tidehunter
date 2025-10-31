## Tidehunter
See [src/main.cpp](src/main.cpp) for the code. 

### Building And Running
Install CMake and your favorite compiler, and follow the commands below:
```sh
# You need to clone with submodules
git clone https://github.com/BrunoWilkinson/tidehunter.git --depth=1 --recurse-submodules
cd tidehunter
cmake -S . -B build
cmake --build build
```
You can also use an init script inside [`config/`](config/). Then open the IDE project inside `build/` 
(If you had CMake generate one) and run!

## Supported Platforms
I have tested the following:
| Platform | Architecture | Generator |
| --- | --- | --- |
| Windows | x86_64, arm64 | Visual Studio |
| Linux | x86_64, arm64 | Ninja, Make |
| Web* | wasm | Ninja, Make |

*See further instructions in [`config/`](config/)

