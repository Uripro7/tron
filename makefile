bin/tron : src/test.cpp
	g++ -o bin/tron src/main.cpp -Iinclude -lftx-screen -lftxui-dom -lftxui-component 