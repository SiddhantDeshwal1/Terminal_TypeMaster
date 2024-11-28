#include "typing_speed_trainer.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
  // Load the dictionary
  vector<string> dictionary = loadDictionary(
      "/home/siddhantdeshwal/Typing-Pro/Spell_Checker/dictionary.txt");

  if (dictionary.empty())
  {
    cerr << "Dictionary is empty. Exiting..." << endl;
    return 1;
  }

  // Choose test type
  cout << "\n********************************************************************************************************************************\n";
  cout << "\n\nWelcome to Terminal Typing Test\n\n";
  cout << "Select test type:\n\n";
  cout << "1. Preset options\n";
  cout << "2. Custom test\n";
  cout << "\n\nEnter choice: ";
  int choice;
  cin >> choice;

  if (choice == 1)
  {
    cout << "\n\nSelect a preset option:\n\n";
    cout << "1. 10 words\n";
    cout << "2. 50 words\n";
    cout << "3. 30 seconds\n";
    cout << "4. 1 minute\n";
    cout << "\n\nEnter choice: ";
    int presetChoice;
    cin >> presetChoice;

    if (presetChoice == 1)
    {
      typingSpeedTrainer(dictionary, 0, 10);
    }
    else if (presetChoice == 2)
    {
      typingSpeedTrainer(dictionary, 0, 50);
    }
    else if (presetChoice == 3)
    {
      typingSpeedTrainer(dictionary, 30);
    }
    else if (presetChoice == 4)
    {
      typingSpeedTrainer(dictionary, 60);
    }
    else
    {
      cout << "Invalid preset choice. Exiting..." << endl;
    }
  }
  else if (choice == 2)
  {
    cout << "Select test type:\n\n";
    cout << "1. Time-based (e.g., 1 minute)\n";
    cout << "2. Word-based (e.g., 50 words)\n";
    cout << "Enter choice: ";
    
    int customChoice;
    cin >> customChoice;

    if (customChoice == 1)
    {
      int durationSeconds;
      cout << "Enter duration in seconds: ";
      cin >> durationSeconds;
      typingSpeedTrainer(dictionary, durationSeconds);
    }
    else if (customChoice == 2)
    {
      int wordLimit;
      cout << "Enter word limit: ";
      cin >> wordLimit;
      typingSpeedTrainer(dictionary, 0, wordLimit);
    }
    else
    {
      cout << "Invalid custom choice. Exiting..." << endl;
    }
  }
  else
  {
    cout << "Invalid choice. Exiting..." << endl;
  }

  return 0;
}
