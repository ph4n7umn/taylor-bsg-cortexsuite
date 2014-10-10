CC = gcc
CFLAGS = 
LDFLAGS = -lm

INCLUDES = -I$(CURDIR)/includes -I$(CURDIR)
COMPILE_C = $(CC) $(CFLAGS) -O2 $(INCLUDES)
COMMON_SRC := $(wildcard $(CURDIR)/*.c)
C_SRC := $(wildcard $(CURDIR)/includes/*.c)

all: small medium large

small: $(C_SRC)
	$(COMPILE_C) $(COMMON_SRC) $(C_SRC) -DUSERS=10 -DTEST_USERS=10 -DMOVIES=3 -DLOOPS=20 -o rbm-small $(LDFLAGS)
	-./rbm-small


medium: $(C_SRC)
	$(COMPILE_C) $(COMMON_SRC) $(C_SRC) -DUSERS=100 -DTEST_USERS=100 -DMOVIES=100 -DLOOPS=20 -o rbm-medium $(LDFLAGS)
	-./rbm-medium


large: $(C_SRC)
	$(COMPILE_C) $(COMMON_SRC) $(C_SRC) -DUSERS=100 -DTEST_USERS=100 -DMOVIES=100 -DLOOPS=200 -o rbm-large $(LDFLAGS)
	-./rbm-large

clean:
	-rm *.o rbm-small rbm-medium rbm-large
