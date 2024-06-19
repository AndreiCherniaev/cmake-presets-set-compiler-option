You can set compiler option or disable compiler warning using two ways.
## CMakeLists.txt way
Add string like this. Note that you should add it after add_executable().
```
target_compile_options(${PROJECT_NAME} PRIVATE -Wno-packed-bitfield-compat)
```

## CMakePresets.json way
Make CMakePresets.json and add
```
      "cacheVariables": {
      	"CMAKE_CXX_FLAGS": "-Wno-packed-bitfield-compat"
      }
```
And build your project
```
cmake -S src/ -DCMAKE_BUILD_TYPE=Release --preset "HabrPresetName"
cmake --build build/ --parallel
```
