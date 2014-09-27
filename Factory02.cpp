#include "Factory02.h"

Factory02::Factory02()
{
}

Factory02::~Factory02()
{
}
 
void * Factory02::create(std::string name)
{
  if(name == "IKeyValue1"){
    return NULL;
  } else if(name == "IKeyValue2"){
    return NULL;
  } else if(name == "IKeyValue3"){
    return NULL;
  } else if(name == "IKeyValue4"){
    return NULL;
  } else if(name == "IPriorityQueue1"){
    return NULL;
  } else if(name == "IPriorityQueue2"){
    return NULL;
  } else if(name == "IPriorityQueue3"){
    return NULL;
  } else if(name == "IPriorityQueue4"){
    return NULL;
  } else {
    return NULL;
  }
}

extern "C" {

ObjectFactory * createObjectFactory(){
  return new Factory02();  
}

}
