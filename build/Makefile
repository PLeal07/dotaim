all: compile link

compile:
	g++ -c ../src/main.cpp -I../include/

link:
	g++ main.o -o dotaim -L../lib/ -lsfml-graphics -lsfml-window -lsfml-system