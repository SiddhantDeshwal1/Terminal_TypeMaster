#!/bin/bash

# Step 1: Navigate to Spell_Checker directory and run make
echo "Building Spell_Checker..."
cd Spell_Checker || { echo "Failed to enter Spell_Checker directory"; exit 1; }
make clean  # Optional: Clean previous builds (if you have a clean target)
make        # Compile the Spell_Checker
if [ $? -ne 0 ]; then
  echo "Error: Failed to build Spell_Checker."
  exit 1
fi
echo "Spell_Checker built successfully."

# Step 2: Go back to the Typing-Pro directory
cd ..

# Step 3: Navigate to Terminal_Typing_Test directory and run make
echo "Building Terminal_Typing_Test..."
cd Terminal_Typing_Test || { echo "Failed to enter Terminal_Typing_Test directory"; exit 1; }
make clean  # Optional: Clean previous builds (if you have a clean target)
make        # Compile the Terminal_Typing_Test
if [ $? -ne 0 ]; then
  echo "Error: Failed to build Terminal_Typing_Test."
  exit 1
fi
echo "Terminal_Typing_Test built successfully."

# Step 4: Execute the typing_trainer program
echo "Running typing_trainer..."
./typing_trainer
