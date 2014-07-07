# Arthor: Jack Chin
# 26/5/2014

#compiler related stuff
CC=gcc
CXX = g++
CFLAGS= -Wall -g
CXXFLAGS = -Wall -g -std=c++0x

SRC = $(strip $(shell ls *.c *.cpp))


.PHONY: clean compile check

compile: $(basename $(SRC))

	     	      

