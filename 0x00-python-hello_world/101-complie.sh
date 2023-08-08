#!/bin/bash

if [ -z "$PYFILE" ]; then
  echo "Error: Environment variable \$PYFILE is not set."
  exit 1
fi

# Extract the filename without extension
filename=$(basename -- "$PYFILE")
filename_noext="${filename%.*}"

output_filename="$filename_noext.pyc"

# Compile the Python script
python -m py_compile "$PYFILE"

# Rename the compiled file
mv "__pycache__/$filename_noext.cpython-*.pyc" "$output_filename"

# Clean up the __pycache__ directory
rm -r "__pycache__"

echo "Compilation complete. Compiled file: $output_filename"

