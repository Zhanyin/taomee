CC = g++

FLAGS   = -Wall -pipe -DDEBUG -g -D_GNU_SOURCE  -D_REENTRANT -fPIC $(SHARE_FLAG)
#FLAGS   = -Wall -pipe -DNDEBUG -O3 -D_GNU_SOURCE  -D_REENTRANT
SOFLAGS = -shared -fPIC

INCLUDE = -I../../ -I../../../ -I../

OO		= paopao.o
TARGETS	= libpaopaoball.so
GAME	= paopaoball.cpp
LINKOBJ	= ../mpog.o

all: $(OO) $(TARGETS)

$(TARGETS): $(GAME)
	$(CC) $(FLAGS) $(SOFLAGS) $(INCLUDE) $(LINKOBJ) $(OO) $(GAME) -o $@
	mv $(TARGETS) ../

%.o: %.cpp %.hpp
	$(CC) $(FLAGS) $(INCLUDE) -c $<

clean:
	rm -f *.o
	rm -f $(TARGETS) $(OO)
