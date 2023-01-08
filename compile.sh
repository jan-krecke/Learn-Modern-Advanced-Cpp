#!/bin/bash

# The first argument passed to the script is the path to the cpp file
cpp_file=$1

# Extract the directory and filename from the cpp file path
dir=$(dirname "$cpp_file")
filename=$(basename "$cpp_file")

# Use clang++ to compile the cpp file and store the executable in the target directory
mkdir -p "target/$dir"
clang++ "$cpp_file" -o "target/$dir/${filename%.*}"
