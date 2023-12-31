#include <SFML/Graphics.hpp>
#include <iostream>
#include <cstdlib>
#include <ctime> 
#include "Map.h"

Map::Map(int w, int h) : width(w), height(h) {

    grassTexture.loadFromFile("./sprite/grass3.png");
    grassTiles.resize(width * height);

    for (int x = 0; x < width; ++x) {
        for (int y = 0; y < height; ++y) {
            sf::Sprite grassSprite(grassTexture);
            grassSprite.setPosition(x * grassTexture.getSize().x, y * grassTexture.getSize().y);
            grassTiles[x + y * width] = grassSprite;
        }
    }
}



void Map::draw(sf::RenderWindow& window) {

    for (auto& grass : grassTiles) {
        window.draw(grass);
    }
}