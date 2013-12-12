#include <vector>

using namespace std;

class Stack{

 private:
  vector <float> elements;

 public:
 Stack(){}

void push(float value){
  elements.push_back(value);
}
float pop(){
  elements.pop_back();
}
float top(){
  if (elements.size() >= 1){
    return elements[elements.size()-1];
  }else
    return 0;
}
float first(){ 
  return top();
}
float second(){
  if (elements.size() >= 2){
    return elements[elements.size()-2];
  }else
    return 0;
}
float third(){
  if (elements.size() >= 3){
    return elements[elements.size()-3];
  }else
    return 0;
}
float fourth(){
  if (elements.size() >= 4){
    return elements[elements.size()-4];
  }else
    return 0;
  
}


};
