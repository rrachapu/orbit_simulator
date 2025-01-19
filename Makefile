# Compiler and flags
CXX = g++
CXXFLAGS = -I/opt/homebrew/include/eigen3 -Iinclude -std=c++17 -Wall -Wextra

# Directories
SRC_DIR = src
BUILD_DIR = build

# Source files and target
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(BUILD_DIR)/%.o, $(SRCS))
TARGET = main

# Rules
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(OBJS) -o $@

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR) $(TARGET)
