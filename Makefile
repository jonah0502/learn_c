CXX=gcc
CXXFLAGS=-Wall
BUILDTARGETS = hello helloYou

all: hello helloYou
clean:
	rm $(BUILDTARGETS)
hello:hello.c
	$(CXX) $(CXXFLAGS) hello.c -o hello
helloYou: helloYou.c
		$(CXX) $(CXXFLAGS) helloYou.c -o helloYou
