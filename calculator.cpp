//calc

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <vector>
#include "numButton.h"

using namespace std;

vector <int> elements;

void push(int value){
  elements.push_back(value);
}
int pop(){
  elements.pop_back();
}
int top(){
  if (elements.size() >= 1){
    return elements[elements.size()-1];
  }else
    return 0;
}
//for display. Returns the first, second, etc things on the stack
int first(){ 
  return top();
}
int second(){
  if (elements.size() >= 2){
    return elements[elements.size()-2];
  }else
    return 0;
}
int third(){
  if (elements.size() >= 3){
    return elements[elements.size()-3];
  }else
    return 0;
}
int fourth(){
  if (elements.size() >= 4){
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

void opAddition(Fl_Widget *w,void *){
  Fl_Button *myButton = (Fl_Button *)w;
}

void opSubtraction(Fl_Widget *w,void *){
  Fl_Button *myButton = (Fl_Button *)w;
}

void opMultiplication(Fl_Widget *w,void *){
  Fl_Button *myButton = (Fl_Button *)w;
}

void opDivision(Fl_Widget *w,void *){
  Fl_Button *myButton = (Fl_Button *)w;
}
void opExpo(Fl_Widget *w,void *){
  Fl_Button *myButton = (Fl_Button *)w;
}

void opSqrt(Fl_Widget *w,void *){
  Fl_Button *myButton = (Fl_Button *)w;
}
void opSign(Fl_Widget *w,void *){
  Fl_Button *myButton = (Fl_Button *)w;
}
void opEnter(Fl_Widget *w,void *){
  Fl_Button *myButton = (Fl_Button *)w;
}
void opDrop(Fl_Widget *w,void *){
  Fl_Button *myButton = (Fl_Button *)w;
}

int main(int argc, char *argv[])
{
  //create window
  Fl_Window *window = new Fl_Window(400,600);

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

 Fl_Button *addition = new Fl_Button(300,200, 50, 50,"+");
 addition->callback (opAddition,0);

 Fl_Button *subtraction = new Fl_Button(300,255, 50, 50,"-");
 subtraction->callback (opSubtraction,0);

 Fl_Button *multiplication = new Fl_Button(300,310, 50, 50,"*");
 multiplication->callback (opMultiplication,0);

 Fl_Button *division = new Fl_Button(300,365, 50, 50,"/");
 division->callback (opDivision,0);

 Fl_Button *expo = new Fl_Button(300,420, 50, 50,"^");
 expo->callback (opExpo,0);

 Fl_Button *sqrt = new Fl_Button(300,475, 50, 50,"sqrt");
 sqrt->callback (opSqrt,0);

 Fl_Button *sign = new Fl_Button(300,530, 50, 50,"+/-");
 sign->callback (opSign,0);


 Fl_Button *enter = new Fl_Button(200,485, 50, 50,"ENTER");
 enter->callback (opEnter,0);
 
 Fl_Button *drop = new Fl_Button(35,485, 50, 50,"DROP");
 drop->callback (opDrop,0);
 

//cout << "hello" << endl;
// cout << "good bye" << endl;
  window->end();
  window->show(argc,argv);
  return Fl::run();
}
