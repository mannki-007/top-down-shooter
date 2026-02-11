#include <SFML/Graphics.hpp>
#include "bg.hpp"
#include "player.hpp"
#include <cmath>




void drawbg(sf::RenderWindow &window) {
    int gridX = floor(playerX / w) * w;
    int gridY = floor(playerY / h) * h;
    sf::Texture background;
    background.loadFromFile("texture/floor.png");
    background.setRepeated(true);
    sf::Sprite sprite;
    sprite.setTexture(background);
    sprite.setTextureRect(sf::IntRect(0, 0, w, h));
    sprite.setPosition(-w / 2.f, -h / 2.f);
    sprite.setOrigin(0, 0);
    sprite.setTextureRect(sf::IntRect(0, 0, w * 3, h * 3));
    window.draw(sprite);
}
