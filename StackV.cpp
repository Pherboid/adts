#include "StackV.h"

 int Stack::size(){
   return data.size();
 }

int Stack::top(){
  if(data.back()>-1){
    return data.back();
  }

}

void Stack::pop(){
  data.pop_back();
}


void Stack::push(int val){
  data.push_back(val);
}

void Stack::clear(){
  for (int unsigned i =0 ; i <data.size(); i++){
    pop();
  }
}
