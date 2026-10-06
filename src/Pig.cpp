#include "Pig.h"

// Removes the pig from play
void Pig::hit()
{
  setVisibility(false);
}

bool Pig::isAlive()
{
  return getVisibility();
}

int Pig::getPoints() const
{
  return points;
}
