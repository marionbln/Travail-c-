all: client.o train.o tram.o main.o
	g++ -o main main.o train.o tram.o client.o
main.o : client.h train.h tram.h main.cpp
	g++ -c -Wall --std=c++17 main.cpp
train.o : train.h train.cpp
	g++ -c -Wall --std=c++17 train.cpp
tram.o : tram.h tram.cpp
	g++ -c -Wall --std=c++17 tram.cpp
client.o:  client.h client.cpp
	g++ -c -Wall --std=c++17 client.cpp
clean:
	rm -rf *.o main
