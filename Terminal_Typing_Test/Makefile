CXX = g++
CXXFLAGS = -std=c++11 -Wall
SOURCES = main2.cpp typing_speed_trainer.cpp
OBJECTS = $(SOURCES:.cpp=.o)
TARGET = typing_trainer

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CXX) $(OBJECTS) -o $(TARGET)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f $(OBJECTS) $(TARGET)
