CXX=g++
CXXFLAGS=-Wall

all: process_interaction

process_interaction: process_interaction.cpp
	$(CXX) $(CXXFLAGS) -o process_interaction 19.11.23(2nd).cpp

clean:
	rm -f process_interaction
