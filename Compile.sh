# /bin/bash

# Create the "obj" dir in case it does not exist
if [ ! -d "obj" ]; then
    mkdir "obj"
fi

# Compile the project files
echo "Compiling files..."
g++ -c src/main.cpp -o obj/main.o
g++ obj/main.o -o Survival -lsfml-system -lsfml-window -lsfml-graphics
echo "Compilation complete!"