CXX = g++
CXXFLAGS = -std=c++20 -Wall -Wextra -Iinclude

SRC = src/main.cpp \
      src/console.cpp \
      src/world_state.cpp \
      src/command.cpp

TARGET = chronicle

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)

run: $(TARGET)
	./$(TARGET)