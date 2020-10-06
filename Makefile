CXX=gcc
CXXFLAGS=-Wall
BUILDTARGETS = hello helloYou fff readFile sortDogs dog.o

all: hello helloYou fff readFile sortDogs
clean:
	rm $(BUILDTARGETS)
hello:hello.c
	$(CXX) $(CXXFLAGS) hello.c -o hello
helloYou: helloYou.c
	$(CXX) $(CXXFLAGS) helloYou.c -o helloYou
fff: fff.c
	$(CXX) $(CXXFLAGS) fff.c -o fff
readFile: readFile.c
	$(CXX) $(CXXFLAGS) readFile.c -o readFile
sortDogs: main.c Dog.o Dog.h
	$(CXX) $(CXXFLAGS) main.c Dog.o -o sortDogs
Dog.o: Dog.c Dog.h
	$(CXX) $(CXXFLAGS) Dog.c -c
