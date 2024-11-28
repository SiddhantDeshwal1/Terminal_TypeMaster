#ifndef TYPING_SPEED_TRAINER_H
#define TYPING_SPEED_TRAINER_H

#include <string>
#include <vector>

std::vector<std::string> loadDictionary(const std::string &filename);
std::string getRandomWord(const std::vector<std::string> &dictionary);
int checkWordAccuracy(const std::string &word);
void typingSpeedTrainer(std::vector<std::string> &dictionary,
                        int durationSeconds = 60, int maxWords = -1);

#endif // TYPING_SPEED_TRAINER_H
