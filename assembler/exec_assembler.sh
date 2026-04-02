#!/bin/bash

echo "--- CPU Assembler ---"

while true; do
    read -p "Enter program filename (or type exit to quit): " arg

    if [[ "${arg,,}" == "exit" ]]; then
        break
    fi

    python3 assembler.py "$arg"
    python3 memorymaker.py "$arg.RAM" "$arg.mem"
    echo
done

echo "Done."
read -p "Press Enter to continue..."