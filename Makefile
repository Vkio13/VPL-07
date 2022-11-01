CC := g++
SRCDIR := src
BUILDDIR := build
TARGET := main.out
CFLAGS := -g -wall

all: 
	g++ *.cpp -o $(TARGET)
clean: 
	#$(RM) -r * $(TARGET)
