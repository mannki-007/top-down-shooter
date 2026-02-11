#ifndef map
#define map
#include <SFML/Graphics.hpp>



const int mapw = 30;
const int maph = 30;

extern int tileMap[maph][mapw]; 




void drawwall(sf::RenderWindow &window);

#endif