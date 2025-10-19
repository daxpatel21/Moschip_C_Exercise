#!/bin/bash

# Loop through all C files matching exX-Y.c pattern
for file in ex*-*.c; do
  # Extract exercise name (e.g., "ex1-1")
  folder="${file%.c}"

  # Make a new folder for each exercise
  mkdir -p "$folder"

  # Move all related files (matching the exercise name) into that folder
  mv "${folder}.c" "$folder/" 2>/dev/null
  mv "${folder}_Experiment.c" "$folder/" 2>/dev/null
  mv "Readme_${folder}.md" "$folder/" 2>/dev/null

  # Copy or move a Makefile template into the folder
  cp Makefile "$folder/" 2>/dev/null

  echo "Organized: $folder/"
done
