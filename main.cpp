#include<SFML/Graphics.hpp>
#include "birb.h"


int main() {
	//randomizer
	srand(time(NULL));
	int flight = rand() % 100 +1;


	//Arrays
	int birbColor[] = { 255, 192, 203 }; //pink color array
	int birbColor2[] = { 25, 200, 200 }; //blue color array
	int birbColor3[] = { 255,255,204 };  //yellow color array

	int y[] = { 100,200,300,400,500,600 }; //ypos array


	//instantiate birbs
	birb Jakie(100, y[0], birbColor);
	birb Alex(200, y[1], birbColor2);
	birb Keven(300, y[2], birbColor3);
	birb Jebis(400, y[3], birbColor);
	birb Lucks(500, y[4], birbColor2);
	birb Rickie(600, y[5], birbColor3);

	sf::RenderWindow window(sf::VideoMode(700, 700), "Happy Spring!"); //set up game window


	while (true) {//GAME LOOP OMG
		window.clear();

		//fly
		Jakie.fly(window);
		Alex.fly(window);
		Keven.fly(window);
		Jebis.fly(window);
		Lucks.fly(window);
		Rickie.fly(window);

		//draw
		Jakie.draw(window);
		Alex.draw(window);
		Keven.draw(window);
		Jebis.draw(window);
		Lucks.draw(window);
		Rickie.draw(window);

		window.display();
	}
}

