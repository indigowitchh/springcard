#include<SFML/Graphics.hpp>
#include "birb.h"


int main() {
	//randomizer
	srand(time(NULL));
	int flight = rand() % 100 +1;
	int colour = rand() % 100 + 1;

	//Arrays
	int birbColor[] = { 255, 192, 203 }; //pink color array
	int birbColor2[] = { 25, 200, 200 }; //blue color array
	int birbColor3[] = { 255,255,204 };  //yellow color array

	int y[] = { 100,200,300,400,500,600 }; //ypos array

	int FlowerColor[] = { 203,195,227 };
	int FlowerColor2[] = { 162,255,197 };
	int FlowerColor3[] = { 68,150,221 };

	
	
	//instantiate objects
	birb Jakie(100, y[0], birbColor);
	birb Alex(200, y[1], birbColor2);
	birb Keven(300, y[2], birbColor3);
	birb Jebis(400, y[3], birbColor);
	birb Lucks(500, y[4], birbColor2);
	birb Rickie(600, y[5], birbColor3);

	Flower Bobby(100, 700, FlowerColor);
	Flower Milkies(250, 700, FlowerColor2);
	Flower Wandit(400, 700, FlowerColor3);
	Flower NoBallz(550, 700, FlowerColor);
	Flower Tippers(700, 700, FlowerColor2);

	
	sf::RenderWindow window(sf::VideoMode(800, 800), "Happy Spring!"); //set up game window


	while (true) {//GAME LOOP OMG
		window.clear(sf::Color(218, 233, 246));

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
		

		Bobby.draw(window);
		Milkies.draw(window);
		Wandit.draw(window);
		NoBallz.draw(window);
		Tippers.draw(window);
		

		//Change color
		Bobby.changeColor(window);
		Milkies.changeColor(window);
		Wandit.changeColor(window);
		NoBallz.changeColor(window);
		Tippers.changeColor(window);


		window.display();
	}
}


