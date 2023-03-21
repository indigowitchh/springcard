#include"birb.h"

//function definition for constructor
birb::birb(int x, int y, int c[3]) {
	xpos = x;
	ypos = y;
	color[0] = c[0]; //if our array was any longer I would have used a for loop here :)
	color[1] = c[1];
	color[2] = c[2];

}

//function definition for draw
void birb::draw(sf::RenderWindow& window) {

	//leggies
	feets.setPosition(xpos + 10, ypos + 35);
	feets.setFillColor(sf::Color(200, 150, 0));
	feets.setSize(sf::Vector2f(5, 15));
	window.draw(feets); //first leg
	feets.setPosition(xpos + 25, ypos + 35);
	window.draw(feets); //second leg

	//body 
	body.setRadius(20);
	body.setFillColor((sf::Color(color[0], color[1], color[2]))); //noticing accessing slots of an array is just like getting to slots of a list
	body.setPosition(xpos, ypos);
	window.draw(body);
	
	//birb eyes
	body.setRadius(4);
	body.setFillColor((sf::Color(0,0,0))); //black
	body.setPosition(xpos+15, ypos+10);
	window.draw(body); //first eye
	body.setPosition(xpos + 30, ypos + 10);
	window.draw(body); //second eye

	//birb beak
	beak.setPointCount(3); //make it a triangle
	beak.setRadius(10);
	beak.setFillColor((sf::Color(200, 150, 0))); //orange
	beak.setPosition(xpos + 17, ypos + 10);
	window.draw(beak);

}

void birb::fly(sf::RenderWindow& window){
	
	int flight = rand() % 100 + 1;
	if (flight <= 3) {
		ypos -= 1;
	}
}

Flower::Flower(int x, int y, int c[3]) {
	xpos = x;
	ypos = y;
	color[0] = c[0];
	color[1] = c[1];
	color[2] = c[2];
}

void Flower::draw(sf::RenderWindow& window) {
	mid.setRadius(15);
	mid.setFillColor((sf::Color(252,255,0)));
	mid.setPosition(xpos, ypos);
	window.draw(mid);
	
	petal1.setRadius(15);
	petal1.setFillColor((sf::Color(color[0], color[1], color[2])));
	petal1.setPosition(xpos+20, ypos-10);
	window.draw(petal1);

	petal2.setRadius(15);
	petal2.setFillColor((sf::Color(color[0], color[1], color[2])));
	petal2.setPosition(xpos+15, ypos+15);
	window.draw(petal2);

	petal3.setRadius(15);
	petal3.setFillColor((sf::Color(color[0], color[1], color[2])));
	petal3.setPosition(xpos, ypos-20);
	window.draw(petal3);

	petal4.setRadius(15);
	petal4.setFillColor((sf::Color(color[0], color[1], color[2])));
	petal4.setPosition(xpos-10, ypos+15);
	window.draw(petal4);

	petal5.setRadius(15);
	petal5.setFillColor((sf::Color(color[0], color[1], color[2])));
	petal5.setPosition(xpos-15, ypos-10);
	window.draw(petal5);
}

void Flower::changeColor(sf::RenderWindow& window) {
	int colour = rand() % 100 + 1;
	int red = rand() % 255;
	int green = rand() % 255;
	int blue = rand() % 255;

	if (colour <= 5) {
		int reyIsSus[] = { red, green,blue };
		color[0] = reyIsSus[0];
		color[1] = reyIsSus[1];
		color[2] = reyIsSus[2];
	}
}
