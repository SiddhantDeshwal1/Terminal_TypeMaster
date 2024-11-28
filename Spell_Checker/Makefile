CXX = g++
CXXFLAGS = -std=c++11 -Wall
SOURCES = main.cpp LevenshteinDistance.cpp SpellChecker.cpp Trie.cpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = spellchecker

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJECTS) $(TARGET)
