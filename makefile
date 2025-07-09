CXX := g++
CXXFLAGS := -std=c++17 -Wall -Iinclude

BIN_DIR := bin
OBJ_DIR := obj
SRC_DIR := src

TARGET := $(BIN_DIR)/calculadora
SOURCES := $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS := $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SOURCES))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $^ -o $@

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	$(BIN_DIR)/calculadora

clean:
	@rm -rf $(OBJ_DIR) $(BIN_DIR)

.PHONY: all run clean