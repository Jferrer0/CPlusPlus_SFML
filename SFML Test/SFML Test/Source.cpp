#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
	sf::RenderWindow window(sf::VideoMode(1600, 900), "SFML Lines Test");

	sf::Vertex line1[] =
	{
		sf::Vertex(sf::Vector2f(20, 20)),
		sf::Vertex(sf::Vector2f(1580, 880))
	};

	sf::Vertex line2[] =
	{
		sf::Vertex(sf::Vector2f(20, 40)),
		sf::Vertex(sf::Vector2f(1560, 880))
	};

	sf::Vertex line3[] =
	{
		sf::Vertex(sf::Vector2f(20, 60)),
		sf::Vertex(sf::Vector2f(1540, 880))
	};

	line1[0].color = sf::Color::Blue;
	line1[1].color = sf::Color::Red;

	line2[0].color = sf::Color::Red;
	line2[1].color = sf::Color::Green;

	line3[0].color = sf::Color::Green;
	line3[1].color = sf::Color::Blue;

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		window.clear();
		window.draw(line1, 2, sf::Lines);
		window.draw(line2, 2, sf::Lines);
		window.draw(line3, 2, sf::Lines);
		window.display();
	}

	return 0;
}