#include "incs/Settings.hpp"
#include "general.cpp"
#include "Colony.cpp"
#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
    initialisation();//Demarrage de la console pour le paramettrage général

	srand((unsigned int)time(NULL));

	sf::RenderWindow window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Fourmilliere");
	sf::Clock clock;

	sf::RenderTexture texture;
	texture.create(WINDOW_WIDTH, WINDOW_HEIGHT);
	texture.display();
	sf::Sprite sprite;
	Colony c = Colony(texture);
	while (window.isOpen())
	{
		sf::Event event;

		while (window.pollEvent(event))
			if (event.type == sf::Event::Closed)
				window.close();
        c.update(texture);
		window.clear();
		fourmisReine(texture, (ANTHILL_X * 2)/4 + 5, (ANTHILL_Y * 2)/4, ANTHILL_COLOR);
        fourmisReine(texture, (ANTHILL_X * 6)/4, (ANTHILL_Y * 6)/4, ANTHILL_COLOR);
        fourmisReine(texture, ANTHILL_X, ANTHILL_Y, ANTHILL_COLOR);

		texture.display();
		sprite = sf::Sprite(texture.getTexture());
		window.draw(sprite);
		window.display();
	}

	return 0;
}
