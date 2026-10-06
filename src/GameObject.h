
#ifndef ANGRYBIRDSSFML_GAMEOBJECT_H
#define ANGRYBIRDSSFML_GAMEOBJECT_H

#include <SFML/Graphics.hpp>
#include <string>
#include "Vector2.h"

class GameObject
{
 public:
  GameObject();
  virtual ~GameObject();
  virtual void update(float dt) {}   // overridden by Bird / Pig
  GameObject(const GameObject&) = delete;            // owns raw sprite pointer
  GameObject& operator=(const GameObject&) = delete;
  bool setSprite(sf::Texture &texture, std::string filename);
  sf::Sprite* getSprite();
  bool setScreenScale(GameObject& image,sf::Vector2u texture, sf::Vector2u window);
  void setVisibility(bool visibility);
  bool getVisibility();
  void setMoving(bool moving);
  bool getMoving();
  void setDirection(Vector2 object_direction);
  Vector2 getDirection();
  void setActive(bool active);
  bool getActive();

 private:
  sf::Sprite* sprite = nullptr;
  float scaleX = 1;
  float scaleY = 1;
  bool is_visible = true;
  bool is_moving = false;
  Vector2 direction = {0, 0};
  bool is_active = false;
};

#endif // ANGRYBIRDSSFML_GAMEOBJECT_H
