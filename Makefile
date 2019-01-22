CC=g++
CFLAGS=-Wall -g -O0 -std=c++11
TARGET_NAME=Point
TARGET_TEST=test-point
SRC=src/Point.cpp src/main.cpp
SRC_TEST=src/Point.cpp src/PointTest.cpp
DEPS=-I headers/

default: all

all:
	$(CC) -o $(TARGET_NAME) $(SRC) $(DEPS) $(CFLAGS)

test : 
	$(CC) -o $(TARGET_TEST) $(SRC_TEST) $(DEPS) $(CFLAGS)
	./test-point

clean:
	rm $(TARGET_NAME) $(TARGET_TEST)

run:	all
	./Point
