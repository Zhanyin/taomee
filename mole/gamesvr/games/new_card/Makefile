CC = g++

FLAGS   = -Wall -pipe -DDEBUG -g -D_GNU_SOURCE  -D_REENTRANT -fPIC  $(SHARE_FLAG)
#FLAGS   = -Wall -pipe -DNDEBUG -O3 -D_GNU_SOURCE  -D_REENTRANT
SOFLAGS = -shared -fPIC

INCLUDE = -I../../ -I../../../ -I../  -I/usr/include/libxml2

OO		= match.o new_card.o player.o
TARGETS	= libnew_card.so
GAME	= new_cardgame.cpp
LINKOBJ	= ../mpog.o

all: $(OO) $(TARGETS)

$(TARGETS): $(GAME)
	$(CC) $(FLAGS) $(SOFLAGS) $(INCLUDE) $(LINKOBJ) $(OO) $(GAME) -o $@ -ltaomee
	mv $(TARGETS) ../

%.o: %.cpp %.hpp
	$(CC) $(FLAGS) $(INCLUDE) -c $<

clean:
	rm -f *.o
	rm -f $(TARGETS) $(OO)
