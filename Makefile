CFLAGS = -I ./include
##LIB    = ./libggfonts.so
LFLAGS = -lrt -lX11 -lGLU -lGL -pthread -lm #-lXrandr

all: project_zombie

project_zombie: project_zombie.cpp log.cpp timers.cpp mwehrmeyer.cpp lrafanan.cpp arodriguez3.cpp sstewart.cpp
	g++ $(CFLAGS) project_zombie.cpp log.cpp timers.cpp mwehrmeyer.cpp lrafanan.cpp arodriguez3.cpp sstewart.cpp libggfonts.a -Wall -Wextra $(LFLAGS) -oproject_zombie

clean:
	rm -f project_zombie
	rm -f *.o
