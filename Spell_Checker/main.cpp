#include "LevenshteinDistance.h"

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Function to load the dictionary from a file
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
    cerr << "Failed to open dictionary file! main2.cpp" << endl;
    exit(1);
  }

  return dictionary;
}

// Function to find the closest match for a given word
pair<int, string> findClosestWord(const string &input, const vector<string> &dictionary)
{
  int minDistance = INT_MAX;
  string closestWord;

  for (const string &word : dictionary)
  {
    int distance = levenshteinDistance(input, word);

    if (distance < minDistance)
    {
      minDistance = distance;
      closestWord = word;
    }
  }

  return {minDistance, closestWord};
}

int main(int argc, char *argv[])
{
  // Check if the input word is passed as an argument
  if (argc != 2)
  {
    cerr << "Usage: " << argv[0] << " <word>" << endl;
    return 1;
  }

  string inputWord = argv[1];

  // Load the dictionary
  vector<string> dictionary = loadDictionary("/home/siddhantdeshwal/Typing-Pro/Spell_Checker/dictionary.txt");

  // Find the closest match
  pair<int, string> closestWord = findClosestWord(inputWord, dictionary);

  // Output the score (distance)
  cout << closestWord.first << endl;

  return 0;
}
