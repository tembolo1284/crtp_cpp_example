#Curiously Recurring Template Pattern example in C++ using CMake

The Curiously Recurring Template Pattern (CRTP) is a C++ idiom where a class X derives from a class template instantiation using itself as template argument. This pattern allows you to create code that is easier to maintain and can provide performance benefits due to compile-time polymorphism.

To build and run the project type the following:

cmake -B build
cmake --build build

You should be all set! Executable should be in:
./build/Debug/main.exe


You can also run manually using g++ by typing:

g++ -I include src/SimpleInterestCalculator.cpp src/CompoundInterestCalculator.cpp src/main.cpp -o my_program

You should get an executable built called my_program.exe
