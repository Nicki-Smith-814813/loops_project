# Makefile for Loops Project

# Compiler and flags
CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

# Target executable name and source file
TARGET = loops_project
SRC = loops_project.cpp
BIN_DIR = bin

# Default target
all: $(BIN_DIR)/$(TARGET)

# Compile binary
$(BIN_DIR)/$(TARGET): $(SRC)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $(BIN_DIR)/$(TARGET) $(SRC)

# Run the program
run: all
	./$(BIN_DIR)/$(TARGET)

# Clean build files
clean:
	rm -rf $(BIN_DIR)

# Help target
help:
	@echo "Makefile options:"
	@echo "  make         - compile the project"
	@echo "  make run     - compile and run the project"
	@echo "  make clean   - remove compiled files"
