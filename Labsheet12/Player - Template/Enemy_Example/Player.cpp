// Player class

#include "Player.h"   // include Player header file


// Definition of member functions of the Player class


Player::Player() // default constructor
{
	loadImage(); // load the image file for the sprite

	m_image_width = 124; // the width of the image in pixels
	m_scaled = false; // the image is not scaled

	int xPos = SCREEN_WIDTH/2;        // place the player object in the centre of the screen
	int yPos = SCREEN_HEIGHT/2;
	setPosition(xPos, yPos);  // set the position of the players sprite

	m_speed = 5; // the average speed
	m_direction = (rand() % 2) + 1;        // Generates a random number between 1 and 2
	m_lives = 3;
}

void Player::loadImage()
// Loads the image for the player object
{
	if (!m_texture.loadFromFile("ASSETS/IMAGES/SquareGuy.bmp"))
	{
		std::cout << "error with player image file";
	}

	m_sprite.setTexture(m_texture);
}



sf::Sprite Player::getBody() // get the player's body
{
	return m_sprite;
}


void Player::setPosition()  // set the position of the player on the screen
{
	m_sprite.setPosition(200, 40);
}


void Player::setPosition(int xPos, int yPos)  // set the position of the player on the screen
{
	m_sprite.setPosition(xPos, yPos);
}

void Player::changeColor()
{

	m_sprite.setColor(sf::Color::Blue);
}

void Player::speedIncrease(float amount)
{
	m_speed += amount;

}

void Player::speedDecrease(float amount)
{
	int decrease = 1;
	m_speed -= decrease;

	if (m_speed < 0)
	{
		std::cout << "Can't go lower than zero" << std::endl;
		m_speed = 0;
	}
}

void Player::move()
{
	sf::Vector2f pos(m_sprite.getPosition());

	if (m_direction == EAST)
	{
		pos.x += m_speed;
	}
	if (m_direction == WEST)
	{
		pos.x -= m_speed;
	}
	if (pos.x + m_image_width > SCREEN_WIDTH)
	{
		m_direction = WEST;
	}
	if (pos.x < 0)
	{
		m_direction = EAST;
	}
	

	m_sprite.setPosition(pos);

}



