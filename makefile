#makefile
main: main.cpp Money.o Money.h Account.o Account.h
	g++ pa3.exe -std=c++11 -o main.cpp Money.o Money.h Account.o Account.h

Money.o: Money.cpp Money.h
	g++ -c Money.cpp

Account.o: Account.cpp Account.h
	g++ -c Account.cpp

run:
	./pa3.exe

clean:
	$(RM) *.o *~
	$(RM) pa3.exe *~