main: main.o print.o factorial.o multiply.o
	g++ -o main main.o print.o factorial.o multiply.o

main.o:
	g++ -c main.cpp

print.o:
	g++ -c print.cpp

factorial.o:
	g++ -c factorial.cpp

multiply.o:
	g++ -c multiply.cpp

clean:
	rm -f main main.o print.o factorial.o multiply.o
