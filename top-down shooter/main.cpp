#include <SFML/Graphics.hpp>
#include "bg.hpp"
#include "player.hpp"
#include "map.hpp"





void drawPlayer(sf::RenderWindow &window) {
    sf::CircleShape myplayer(10.f);
    myplayer.setFillColor(sf::Color::Red);
    myplayer.setPosition(playerX,playerY);
    window.draw(myplayer);
}



int main() {
   
    sf::RenderWindow window(sf::VideoMode(w, h), "SFML Window");












    sf::View view(sf::FloatRect(0, 0, w, h));
    view.setCenter(playerX, playerY);

    window.setFramerateLimit(60);
   
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        playermove();
        window.clear();
       // window.setView(view);

        camera(window);

        drawbg(window);
        
        drawPlayer(window);
        drawwall(window);
        
        window.display();
    }

    return 0;
}
