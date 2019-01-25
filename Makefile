CC=g++
CFLAGS=-Wall -g -O0 -std=c++11
TARGET_NAME=Point.exe
TARGET_TEST=test-point.exe
SRC=src/Point.cpp src/main.cpp
SRC_TEST=src/Point.cpp src/PointTest.cpp
DEPS=-I headers/

default: run 

point:
	$(CC) -o $(TARGET_NAME) $(SRC) $(DEPS) $(CFLAGS)

test : 
	$(CC) -o $(TARGET_TEST) $(SRC_TEST) $(DEPS) $(CFLAGS)
	./$(TARGET_TEST)

clean:
	rm *.exe 

run:	point
	./$(TARGET_NAME)
