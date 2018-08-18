INCLUDE_DIRS = 
LIB_DIRS = 
CC=gcc

CDEFS=
CFLAGS= -O0 -pg -g $(INCLUDE_DIRS) $(CDEFS)
LIBS= -lrt
cLIBS= -L/usr/lib -lopencv_core -lopencv_flann -lopencv_video -lpthread -lX11 -lm

HFILES= 
CFILES= 
cFILES= BitReversal.c

SRCS= ${HFILES} ${CFILES}
cOBJS= ${cFILES:.c=.o}

all:	BitReversal 

clean:
	-rm -f *.o *.d
	-rm -f BitReversal

distclean:
	-rm -f *.o *.d

BitReversal: BitReversal.o
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ $@.o `pkg-config --libs opencv` $(cLIBS)

depend:

.c.o:
	$(CC) $(CFLAGS) -c $<

.c.o:
	$(CC) $(CFLAGS) -c $<
