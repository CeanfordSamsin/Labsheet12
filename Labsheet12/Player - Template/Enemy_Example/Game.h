// Game class declaration
#pragma once

#include "Player.h"   // include Player header file

#include "SFML/Graphics.hpp" 
#include <iostream>
#include <cstdlib>  // include support for randomizing
#include <ctime>   // supports ctime function

#include "Globals.h"   // include Global header file

class Game
{
	// data members
	Player m_myPlayer;  // creates an object of type Player using the default constructor
	sf::RenderWindow m_window;  // main game window

public:
	sf::Font m_font;  // font for writing text
	sf::Text m_message;  // text to write on the screen


public:	  // declaration of function members
	Game();  //  default constructor function
	void	loadContent();
	void	run();

private:
	void update();  // handles input in the game
	void draw();  // draws/renders the game world
};



