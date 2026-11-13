#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
    sf::Vector2u windowSize{800, 600};
    sf::RenderWindow window(sf::VideoMode(windowSize), "Snake");
    window.setFramerateLimit(120);

    while (window.isOpen()) {
        while (std::optional event = window.pollEvent()) {
            if (event->is<sf::Event::Closed>()) {
                window.close();
            } else if (const auto* key = event->getIf<sf::Event::KeyPressed>()) {
                if (key->code == sf::Keyboard::Key::Escape) {
                    window.close();
                }
            }
        }
    }

    return 0;
}