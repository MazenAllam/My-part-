#include "Game.h"
#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
using namespace sf;
using namespace std;

/// main function 
int main()
{
	RenderWindow window(VideoMode(1200, 800), "SFML Works!", Style::Close | Style::Titlebar);
	Game game(1200,800);
	SoundBuffer soundBuffer = game.Background_sound();
	Sound sound;
	sound.setBuffer(soundBuffer);
	sound.play();
	while (window.isOpen())
	{

		game.Render(window);
		game.update(window);
	}
}