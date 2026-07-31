
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -Iinclude

SRC = src/main.cpp src/console.cpp
TARGET = chronicle

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)