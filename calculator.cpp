//calc

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <vector>

vector elements;

void push(int value){
  elements.push_back(value);
}
int pop(){
  elements.pop_back();
}
int top(){
  if (elements.size >= 1){
    return elements[elements.size()-1];
  }else
    return 0;
}
//for display. Returns the first, second, etc things on the stack
int first(){ 
  return top();
}
int second(){
  if (elements.size >= 2){
    return elements[elements.size()-2];
  }else
    return 0;
}
int third(){
  if (elements.size >= 3){
    return elements[elements.size()-3];
  }else
    return 0;
}
int fourth(){
  if (elements.size >= 4){
    return elements[elements.size()-4];
  }else
    return 0;
}
//end display functions


int main(int argc, char *argv[])
{
  //create window
  Fl_Window *window = new Fl_Window(600,400);

  //added button

  cout << "hello" << endl;
  cout << "good bye" << endl;
  window->end();
  window->show(argc,argv);
  return Fl::run();
}
