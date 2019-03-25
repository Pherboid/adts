#include "StackL.h"

int  Stack::size(){
  data.size();
}

void Stack::push(int val){
  data.insert(val, data.size()+1);
}

void Stack::pop(){
  data.remove(data.size());
}

int Stack::top(){
  return data.get(data.size());
}

void Stack::clear(){
  data.clear();
}
