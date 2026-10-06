#include "Bird.h"

// Applies gravity and moves the bird while it is in flight
void Bird::update(float dt)
{
  if (!getMoving())
    return;

  setDirection({getDirection().x, getDirection().y + gravity_step});
  getSprite()->move(getDirection().x * dt, getDirection().y * dt);
}

// Puts the bird into the launched state
void Bird::launch()
{
  setMoving(true);
}

// Positions the bird (e.g. on the slingshot)
void Bird::placeAt(float x, float y)
{
  getSprite()->setPosition(x, y);
}
