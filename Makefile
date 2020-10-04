CXX=gcc
CXXFLAGS=-Wall
BUILDTARGETS = hello helloYou fff readFile

all: hello helloYou fff readFile
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
