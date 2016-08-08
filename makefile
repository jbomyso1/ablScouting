OBJS = scouting.o
CC = g++ -std=c++11
DEBUG = -g
CFLAGS = -c -Wall $(DEBUG)
LFLAGS = -Wall $(DEBUG)

scouting : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o scouting

scouting.o : scouting.cpp
	$(CC) $(CFLAGS) scouting.cpp

clean:
	\rm *.o *~ scouting
