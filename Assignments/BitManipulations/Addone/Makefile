INCLUDE_DIRS = 
LIB_DIRS = 
CC=gcc

CDEFS=
CFLAGS= -O0 -pg -g $(INCLUDE_DIRS) $(CDEFS)
LIBS= -lrt
cLIBS= -L/usr/lib -lopencv_core -lopencv_flann -lopencv_video -lpthread -lX11

HFILES= 
CFILES= 
cFILES= Addone.c

SRCS= ${HFILES} ${CFILES}
cOBJS= ${cFILES:.c=.o}

all:	Addone 

clean:
	-rm -f *.o *.d
	-rm -f Addone

distclean:
	-rm -f *.o *.d

Addone: Addone.o
	$(CC) $(LDFLAGS) $(CFLAGS) -o $@ $@.o `pkg-config --libs opencv` $(cLIBS)

depend:

.c.o:
	$(CC) $(CFLAGS) -c $<

.c.o:
	$(CC) $(CFLAGS) -c $<
