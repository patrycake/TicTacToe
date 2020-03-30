a.out: ticTacToe.o Board.o Constants.o Place.o Player.o
	g++ ticTacToe.o Board.o Constants.o Place.o Player.o -o run
	# the -o in the name of executable default is a.out
	# with the -o i changed it to run
	# after make to run the executable 
	# ./run

ticTacToe.o: ticTacToe.cpp Board.cpp Constants.cpp Place.cpp Player.cpp
	g++ -c ticTacToe.cpp

Board.o: Board.cpp Constants.cpp Place.cpp
	g++ -c Board.cpp

Constants.o: Constants.cpp
	g++ -c Constants.cpp

Place.o: Place.cpp
	g++ -c Place.cpp

Player.o: Player.cpp Board.cpp Place.cpp
	g++ -c Player.cpp

