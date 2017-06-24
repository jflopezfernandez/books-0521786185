
# Compiler Information

CPP := g++
CPPFLAGS := -g -Wall -Wextra -Wpedantic -Werror


# Program Information 

PROGRAM := test

SRCS := $(wildcard *.cpp)
OBJS := $(patsubst %.cpp,%.o,$(wildcard *.cpp))


# Compilation

$(PROGRAM): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(PROGRAM) $(OBJS)

$(OBJS): $(SRCS)
	$(CPP) -c $(CPPFLAGS) $(SRCS)

clean:
	rm -rf $(wildcard *.o)