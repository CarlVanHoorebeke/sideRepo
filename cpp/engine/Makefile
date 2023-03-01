CXX=g++-8
CXXFLAGS=-std=c++2a -Wall -Wextra -Werror -pedantic
OBJ=engine.o motor-cycle.o motor-truck.o vehicle.o main.o
TARGET=target
all: $(TARGET)
$(TARGET): $(OBJ)
	$(CXX) -o $@ $^
clean:
	$(RM) $(TARGET) $(OBJ)
