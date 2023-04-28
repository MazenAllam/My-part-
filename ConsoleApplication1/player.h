#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
using namespace sf;
using namespace std;
class player
{
public:
	player();
	void update(float deltatime);
	void draw(RenderWindow& window);
private:
	RectangleShape body;
	Vector2f velocity;
	bool jump;
	float humpheight;
};

