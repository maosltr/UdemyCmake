# Readme

```bash

mkdir build
cd build
# Configure the project
cmake ..
# build the whole project
cmake --build .
# build specific target (Building a target will automatically build the target dependencies)
cmake --build . --target Library
cmake --build . --target Executable
```
