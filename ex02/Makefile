# Compiler
CXX = c++

# Compiler flags
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

# Target executable name
TARGET = mylog

# Source file
SRC = tests.cpp  Account.cpp

# Rule to build the target
all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRC)

# Rule to clean the generated files
clean:
	rm -f $(TARGET)

fclean: clean
	rm -f $(TARGET)

re: fclean all
