.SUFFIXES: .c .u
CC= gcc
CFLAGS  = 
LDFLAGS = -lm



INCLUDES = -I$(CURDIR)/includes -I$(CURDIR)
#INCLUDES = -I/home/shelbyt/Documents/benchmarks/motion-estimation/includes -I$(CURDIR)
COMPILE_C = $(CC) $(CFLAGS) -O2 $(INCLUDES)
COMMON_SRC := $(wildcard $(CURDIR)/*.c)
C_SRC := $(wildcard $(CURDIR)/includes/*.c)
SMALL = 
MEDIUM =
LARGE =

all: small medium large


small: $(C_SRC)
	$(COMPILE_C) $(COMMON_SRC) $(C_SRC) $(CFLAGS) -o pca-small $(LDFLAGS)
	./pca-small small.data 1593 256 R

medium: $(C_SRC)
	$(COMPILE_C) $(COMMON_SRC) $(C_SRC) $(CFLAGS) -o pca-medium $(LDFLAGS)
	./pca-medium medium.data 722 800 R

large: $(C_SRC)
	$(COMPILE_C) $(COMMON_SRC) $(C_SRC) $(CFLAGS) -o pca-large $(LDFLAGS)
	./pca-large large.data 5000 1059 R


clean:
	-rm -f *.o pca-small pca-medium pca-large
