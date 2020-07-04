# make-cmakelists
The purpose of this repo is to learn to write CMakeLists.txt. 
Ref:
- http://derekmolloy.ie/hello-world-introductions-to-cmake/
- https://cmake.org/cmake/help/latest/guide/tutorial/index.html

## Example 1
The code is no more than a hello world script, but in this example, we use:
- .vscode/tasks.json to invoke the cmake procedure
- the flow of commands is: 
    1. cmake . 
    2. $CMD;
    3. make    
- CMakeLists.txt to define the build procedure


## Example 2
The scripts are still quite simple but spreaded in different directories. 
Several notes
- a directory build is created, and make operation is triggered under build/. This is different from Example 1, where the build operation is invoked under the project directory
- In CMakeLists.txt, we need to
    - specified there is include directory
    - add all the cpp files into source
    - makde the source global
 
