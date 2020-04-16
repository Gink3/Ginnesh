make: main.o world.o view.o actor.o menu.o
	g++ main.o world.o view.o actor.o menu.o -lncurses -o Ginnesh
main.o:
	g++ -c main.cpp
world.o:
	g++ -c world.cpp
view.o:
	g++ -c view.cpp
actor.o:
	g++ -c actor.cpp
menu.o:
	g++ -c menu.cpp
clean:
	rm *.o Ginnesh
