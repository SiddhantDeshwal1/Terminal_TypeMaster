#include "typing_speed_trainer.h"

#include <chrono>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
using namespace chrono;

// Function to load the dictionary
vector<string> loadDictionary(const string &filename)
{
  vector<string> dictionary;
  ifstream file(filename);
  string word;
  if (file.is_open())
  {
    while (getline(file, word))
    {
      dictionary.push_back(word);
    }
    file.close();
  }
  else
  {
    cerr << "Failed to open dictionary file!" << endl;
  }
  return dictionary;
}

// Function to get a random word from the dictionary
string getRandomWord(const vector<string> &dictionary)
{
  int randomIndex = rand() % dictionary.size();
  return dictionary[randomIndex];
}

// Function to check accuracy using Spell Checker
int checkWordAccuracy(const string &word)
{
  string command =
      "/home/siddhantdeshwal/TypeMaster_CLI/Spell_Checker/spellchecker " + word +
      " > score.txt";
  system(command.c_str());

  ifstream file("score.txt");
  int score = 0;
  if (file.is_open())
  {
    file >> score;
    file.close();
  }
  return score;
}

// Main Typing Speed Trainer logic
void typingSpeedTrainer(vector<string> &dictionary, int durationSeconds,
                        int maxWords)
{
  srand(time(0));
  int correctWords = 0, totalWords = 0;
  auto startTime = steady_clock::now();

  while (true)
  {
    // Check if time limit has been reached
    auto currentTime = steady_clock::now();
    if (durationSeconds > 0 &&
        duration_cast<seconds>(currentTime - startTime).count() >=
            durationSeconds)
    {
      break;
    }

    // Check if max word limit has been reached
    if (maxWords > 0 && totalWords >= maxWords)
    {
      break;
    }

    // Generate a random word and display it
    string word = getRandomWord(dictionary);
    cout << "\n\nType the word: " << word << endl;

    // Get user input
    string userInput;
    cin >> userInput;
    totalWords++;

    // Check accuracy
    int score = checkWordAccuracy(userInput);
    if (score == 0)
    {
      correctWords++;
    }
  }

  // Calculate results
  auto elapsedSeconds =
      duration_cast<seconds>(steady_clock::now() - startTime).count();
  double elapsedMinutes = elapsedSeconds / 60.0;
  double wordsPerMinute = (correctWords / elapsedMinutes) * 2.5;

  // Display results
  cout << "\n\n*********************************************************************************************************************************\n";
  cout << "\n\nTyping Test Complete!\n\n";
  cout << "Total Words Typed: " << totalWords << endl;
  cout << "Correct Words: " << correctWords << endl;
  cout << "Typing Speed: " << int(wordsPerMinute) << " WPM" << endl;
  cout << "Accuracy: " << (correctWords / (double)totalWords) * 100.0 << "%" << endl;
}
