# Usage:
# make        # compile all binary
# make clean  # remove ALL binaries and objects

.PHONY = all clean

CC = gcc                        # compiler to use
INCLUDE =  -I.
#CFLAG = -Wall -Wmissing-prototypes -Wstrict-prototypes -fexceptions
CFLAG += -DLINEAR_SEARCH
LINKERFLAG = -lm

SRCS := $(wildcard *.c)
BINS := $(SRCS:%.c=%)

#all: ${BINS}

test: main.o search.o
	@echo "Checking.."
	$(CC) $(INCLUDE) ${LINKERFLAG} $(CFLAG) -o $@ $^

%.o: %.c
	@echo "Creating object.."
	${CC} $(INCLUDE) ${LINKERFLAG} $(CFLAG) -c $<

clean:
	@echo "Cleaning up..."
	rm -rvf *.o ${BINS}