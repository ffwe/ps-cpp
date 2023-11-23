#!/bin/bash

if [ $# -eq 0 ]; then
    echo "Usage: $0 <filename>"
    exit 1
fi

filename="$1.cpp"  # Append ".cpp" to the provided filename
name="${1%%-*}"     # Extract the base name before the hyphen (if it exists)
input_file="${name}.in"

# Check if .in file exists
if [ -e "$input_file" ]; then
    input=$(<"$input_file")
else
    input=""
fi

# Compile the source file using g++
g++ "${filename}" -o "${name}.exe"

# Check if compilation was successful
if [ $? -eq 0 ]; then
    # Run the compiled executable with input from the .in file (if exists)
    if [ -z "$input" ]; then
        ./"${name}.exe"
    else
        echo -e "$input" | ./"${name}.exe"
    fi
else
    echo "Compilation failed."
fi
