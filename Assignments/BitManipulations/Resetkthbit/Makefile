INCLUDE_DIRS = 
LIB_DIRS = 
CC=gcc

CDEFS=
CFLAGS= -O0 -pg -g $(INCLUDE_DIRS) $(CDEFS)
LIBS= -lrt
cLIBS= -L/usr/lib -lopencv_core -lopencv_flann -lopencv_video -lpthread -lX11 -lm

HFILES= 
CFILES= 
cFILES= Resetkthbit.c

SRCS= ${HFILES} ${CFILES}
cOBJS= ${cFILES:.c=.o}

all:	Resetkthbit 

clean:
	-rm -f *.o *.d
	-rm -f Resetkthbit

distclean:
	-rm -f *.o *.d

Resetkthbit: Resetkthbit.o
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ $@.o `pkg-config --libs opencv` $(cLIBS)

depend:

.c.o:
	$(CC) $(CFLAGS) -c $<

.c.o:
	$(CC) $(CFLAGS) -c $<
