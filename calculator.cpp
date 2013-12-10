//calc

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <vector>
#include "numButton.h"
#include <FL/Fl_Output.H>
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

void numButton(Fl_Widget *w, void *) {
  NumberButton *myButton = (NumberButton *)w;
  int num = myButton->getNum();
  myButton->copy_label(std::to_string(num).c_str());
}

void updateDisplay(){
  out4->value((to_string(fourth())).c_str());
}



int main(int argc, char *argv[])
{
  //create window
  Fl_Window *window = new Fl_Window(400,600);

  //displays
  Fl_Output *out4 = new Fl_Output(5,5,400,25,"0");
  out4->box(FL_UP_BOX);
  out4->textsize(12);
  Fl_Output *out3 = new Fl_Output(5,35,400,25,"0");
  out3->box(FL_UP_BOX);
  out3->textsize(12);
  Fl_Output *out2 = new Fl_Output(5,65,400,25,"0");
  out2->box(FL_UP_BOX);
  out2->textsize(12);
  Fl_Output *out1 = new Fl_Output(5,95,400,25,"0");
  out1->box(FL_UP_BOX);
  out1->textsize(12);

  //added button
 NumberButton *b1 = new NumberButton(20, 200, 80,80,"&Beep",1);
 b1->callback(numButton,0);

 NumberButton *b2 = new NumberButton(105, 200, 80,80,"&Beep",2);
 b2->callback(numButton,0);

 NumberButton *b3 = new NumberButton(190, 200, 80,80,"&Beep",3);
 b3->callback(numButton,0);

 NumberButton *b4 = new NumberButton(20, 290, 80,80,"&Beep",4);
 b4->callback(numButton,0);

 NumberButton *b5 = new NumberButton(105, 290, 80,80,"&Beep",5);
 b5->callback(numButton,0);

 NumberButton *b6 = new NumberButton(190, 290, 80,80,"&Beep",6);
 b6->callback(numButton,0);

 NumberButton *b7 = new NumberButton(20, 380, 80,80,"&Beep",7);
 b7->callback(numButton,0);

 NumberButton *b8 = new NumberButton(105, 380, 80,80,"&Beep",8);
 b8->callback(numButton,0);

 NumberButton *b9 = new NumberButton(190, 380, 80,80,"&Beep",9);
 b9->callback(numButton,0);
    
 NumberButton *b0 = new NumberButton(105, 470, 80,80,"&Beep",0);
 b0->callback(numButton,0);
//cout << "hello" << endl;
// cout << "good bye" << endl;
  window->end();
  window->show(argc,argv);
  return Fl::run();
}
