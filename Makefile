SOURCE_PATH = src/
COMPILE_PATH = bin/
COPTIONS = gcc -Wall -std=c11


.DEFAULT_GOAL = all

numconv: $(SOURCE_PATH)numconv.c
	$(COPTIONS) -o $(COMPILE_PATH)numconv $(SOURCE_PATH)numconv.c	

# Target to make all executables
all: numconv

# Target for clean up
clean:
	rm -rf bin/*
