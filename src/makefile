CC = g++
SOURCES = main.cpp hash.cpp bloom.cpp hash_factory.cpp
OBJECTS=$(SOURCES:.cpp=.o)

all: clean main

main: $(OBJECTS)
	$(CC) $(OBJECTS) -o main

.cpp.o:
	$(CC) -c $<


clean:
	rm -rf *o main
