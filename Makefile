both: good bad

good: good.cpp
	g++ good.cpp -o good -I /usr/local/Cellar/sfml/2.5.1/include/SFML -L /usr/local/Cellar/sfml/2.5.1/lib -l sfml-graphics -l sfml-window -l sfml-system

bad: bad.cpp
	g++ bad.cpp -o bad -I /usr/local/Cellar/sfml/2.5.1/include/SFML -L /usr/local/Cellar/sfml/2.5.1/lib -l sfml-graphics -l sfml-window -l sfml-system