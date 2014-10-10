.SUFFIXES: .c .u
CC= gcc
CFLAGS  = 
LDFLAGS = -lm



INCLUDES = -I$(CURDIR)/includes -I$(CURDIR)
COMPILE_C = $(CC) $(CFLAGS) -O2 $(INCLUDES)
COMMON_SRC := $(wildcard $(CURDIR)/*.c)
C_SRC := $(wildcard $(CURDIR)/includes/*.c)

compile:
	gcc -lm main.c common/*.c $(C_SRC) svd.c svd2.c sortSVDResult.c $(LDFLAGS)

run-all: run-small run-medium run-large

run-small:
	-./a.out small.txt

run-medium:
	-./a.out med.txt

run-large:
	-./a.out large.txt

clean:
	-rm a.out
