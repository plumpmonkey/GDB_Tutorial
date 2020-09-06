OBJS	= buggy_bubble.c
OUT	= buggy_bubble

OBJS0	= buggy_bubble.o
SOURCE0	= buggy_bubble.c
HEADER0	= buggy_bubble.h
OUT0	= buggy_bubble

OBJS1	= main2.o oracle.o banana.o
SOURCE1	= main2.c oracle.c banana.c
HEADER1	= orange.h banana.h
OUT1	= myproject2

CC	 = gcc
FLAGS	 = -g -c -Wall -Og
LFLAGS	 =

all: buggy_bubble

buggy_bubble: $(OBJS0) $(LFLAGS)
	$(CC) -g $(OBJS0) -o $(OUT0)

myproject2: $(OBJS1) $(LFLAGS)
	$(CC) -g $(OBJS1) -o $(OUT1)

buggy_bubble.o: buggy_bubble.c
	$(CC) $(FLAGS) buggy_bubble.c


clean:
	rm -f $(OBJS) $(OUT)