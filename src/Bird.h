#ifndef ANGRYBIRDSSFML_BIRD_H
#define ANGRYBIRDSSFML_BIRD_H

#include "GameObject.h"

/** A launchable bird. Derives from GameObject and overrides update() to apply gravity. */
class Bird : public GameObject
{
 public:
  Bird() = default;
  void update(float dt) override;
  void launch();
  void placeAt(float x, float y);

 private:
  static constexpr float gravity_step = 1.2f; // added to vertical velocity each frame
};

#endif // ANGRYBIRDSSFML_BIRD_H
