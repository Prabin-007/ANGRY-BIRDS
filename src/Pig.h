#ifndef ANGRYBIRDSSFML_PIG_H
#define ANGRYBIRDSSFML_PIG_H

#include "GameObject.h"

/** A target pig. Derives from GameObject; knows its score value and when it is hit. */
class Pig : public GameObject
{
 public:
  Pig() = default;
  void hit();
  bool isAlive();
  int getPoints() const;

 private:
  int points = 10;
};

#endif // ANGRYBIRDSSFML_PIG_H
