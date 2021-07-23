//lib
#include "entity.h"
using namespace std;

//constructor
Entity::Entity(int x, int y)
{
    this->p = Position(x, y);
}

//destructor
Entity::~Entity()
{
}

virtual void Entity::move(){
    
}