# Compiler
CXX = c++

# Compiler flags
CXXFLAGS = -Wall -Wextra -Werror -g

# Target executable name
TARGET = megaphone

# Source file
SRC = megaphone.cpp getters.cpp parsing.cpp

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
