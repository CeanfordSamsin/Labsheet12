// Player class declaration
#pragma once

#include "SFML/Graphics.hpp" 
#include "Globals.h"   // include Global header file
#include <iostream>

class Player
{
	// the data members are private by default

	sf::Texture m_texture; // texture for player
	sf::Sprite m_sprite;   // sprite used to represent player
	int m_image_width;  // the width of the image in pixels
	bool m_scaled;  // is the image increased in size

	int m_speed = 1;  // the speed that the player moves
	int m_lives;    // the number of lives
	int m_direction; // is the player moving east or west

	// private member functions


public:	  // declaration of member functions	

	Player(); // default constructor
	void loadImage(); // load the image 
	sf::Sprite getBody();
	void setPosition();
	void setPosition(int xPos, int yPos);

	void move();
	void changeColor();
	void speedIncrease(float amount);
	void speedDecrease(float amount);

};
