CXX=g++

all: test_lepton

test_lepton: main.cpp
	$(CXX) main.cpp ../src/*.cpp -Wall -std=c++98 -I../include -o test_lepton

clean:
	rm test_lepton
