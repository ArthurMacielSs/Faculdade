
vpath %.hpp	include
vpath %.cpp	src/entidades	src

Roda: compilation
	./my_program
	
compilation: build_dir main.o Ponto.o Circulo.o
	g++ build/main.o build/Ponto.o build/Circulo.o -o my_program

build_dir:
	mkdir -p build

main.o:
	g++ -Wall -std=c++11 -Iinclude -c src/main.cpp -o build/main.o

Ponto.o:
	g++ -Wall -std=c++11 -Iinclude -c src/entidades/Ponto.cpp -o build/Ponto.o

Circulo.o:
	g++ -Wall -std=c++11 -Iinclude -c src/entidades/Circulo.cpp -o build/Circulo.o


