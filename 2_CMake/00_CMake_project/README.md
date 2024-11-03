# Readme

```bash
# prepare
mkdir build
cd build

# Configure the project
cmake ..
# OR Configure the project with options
cmake .. -DCOMPILE_EXECUTABLE=ON

# build the whole project
cmake --build .
# OR build specific target (Building a target will automatically build the target dependencies)
cmake --build . --target Library
cmake --build . --target Executable
```
