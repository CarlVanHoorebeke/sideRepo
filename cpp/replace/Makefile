CXX=g++-8
CXXFLAGS=-std=c++2a -Wall -Wextra -Werror -pedantic -g
OBJ=replace.o test-replace.o
TARGET=target
all: $(TARGET)
$(TARGET): $(OBJ)
	$(CXX) -o $@ $^
clean:
	$(RM) $(TARGET) $(OBJ)
