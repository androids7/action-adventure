#ifndef PLAYER_H
#define PLAYER_H

#include "animatedsprite.h"
#include <string>

class Graphics;

class Player : public AnimatedSprite {

public:
    Player();
    Player(Graphics &graphics, float x, float y);

    void draw(Graphics &graphics);
    void update(float elapsedTime);

    virtual void animationDone(std::string currentAnimation);
    virtual void setupAnimations();

private:


};

#endif // PLAYER_H