#ifndef player
#define player
#include <SFML/Graphics.hpp>
extern float playerX;
extern float playerY;

extern int w;
extern int h;

void playermove();
void camera(sf::RenderWindow &window);

#endif
