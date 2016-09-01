struct Object
{
  bool dead;
  Object* next;
  Object* previous;
};

Object * firstObject = NULL;
Object * lastObject = NULL;
