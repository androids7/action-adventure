#ifndef SPRITE_H
#define SPRITE_H

#include <SDL2/SDL.h>
#include <string>
#include "graphics.h"

class Graphics;

/**
 * Sprite class
 * Holds all information for individual sprites
 */
class Sprite {

public:
    Sprite();
    Sprite(Graphics &graphics, const std::string &filePath, int sourceX, int sourceY, int width, int height, float posX, float posY);
    virtual ~Sprite();
    virtual void update();
    void draw(Graphics &graphics, int x, int y);

private:
    SDL_Rect _sourceRect;
    SDL_Texture* _spriteSheet;
    float _x, _y;

};

#endif; // SPRITE_H