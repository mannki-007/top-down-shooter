#include <SFML/Graphics.hpp>

#include "player.hpp"
#include "map.hpp"
float playerX = 10;
float playerY = 10;

int w = 800;
int h = 600;

void camera(sf::RenderWindow &window) {
    float camX = playerX;
    float camY = playerY;


    sf::View view(sf::FloatRect(0, 0, w, h));

    float halfWidth = view.getSize().x / 2.f;
    float halfHeight = view.getSize().y / 2.f;

    camX = std::clamp(camX, halfWidth, (mapw * 32.f) - halfWidth);
    camY = std::clamp(camY, halfHeight, (maph * 32.f) - halfHeight);
    view.setCenter(camX, camY);
    window.setView(view);
}







void playermove() {

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
        playerX -= 2;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
        playerX += 2;

    if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
        playerY -= 2;
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
        playerY += 2;


}








