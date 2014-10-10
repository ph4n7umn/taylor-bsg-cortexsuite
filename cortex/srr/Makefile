.SUFFIXES: .c .u
CC= gcc
CFLAGS  = -O2
LDFLAGS = -lm



INCLUDES = -I$(CURDIR)/includes -I$(CURDIR)
COMPILE_C = $(CC) $(CFLAGS) -O2 $(INCLUDES)
COMMON_SRC := $(wildcard $(CURDIR)/*.c)
C_SRC := $(wildcard $(CURDIR)/includes/*.c)
SMALL = -DSYNTHETIC1
MEDIUM = -DALPACA
LARGE = -DBOOKCASE

all: small medium large


small: $(C_SRC)
	$(COMPILE_C) $(COMMON_SRC) $(C_SRC) $(SMALL) $(CFLAGS) -o srr-small $(LDFLAGS)
	./srr-small

medium: $(C_SRC)
	$(COMPILE_C) $(COMMON_SRC) $(C_SRC) $(MEDIUM) $(CFLAGS) -o srr-medium $(LDFLAGS)
	./srr-medium

large: $(C_SRC)
	$(COMPILE_C) $(COMMON_SRC) $(C_SRC) $(LARGE) $(CFLAGS) -o srr-large $(LDFLAGS)
	./srr-large


clean:
	-rm -f *.o srr-small srr-medium srr-large
