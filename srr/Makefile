

.SUFFIXES: .c .u
CC= gcc
CFLAGS  = -O2
LDFLAGS = -lm



INCLUDES = -I$(CURDIR)/includes -I$(CURDIR)
COMPILE_C = $(CC) $(CFLAGS) -lm -O2 $(INCLUDES)
COMMON_SRC := $(wildcard $(CURDIR)/*.c)
C_SRC := $(wildcard $(CURDIR)/includes/*.c)
SMALL = -DSYNTHETIC1
MEDIUM = -DALPACA
LARGE = -DBOOKCASE

all: small medium large


small: $(C_SRC)
	$(COMPILE_C) $(COMMON_SRC) $(C_SRC) $(SMALL) $(CFLAGS) -o srr-small
	./srr-small

medium: $(C_SRC)
	$(COMPILE_C) $(COMMON_SRC) $(C_SRC) $(MEDIUM) $(CFLAGS) -o srr-medium
	./srr-medium

large: $(C_SRC)
	$(COMPILE_C) $(COMMON_SRC) $(C_SRC) $(MEDIUM) $(CFLAGS) -o srr-large
	./srr-large


clean:
	-rm -f *.o srr-small srr-medium srr-large
