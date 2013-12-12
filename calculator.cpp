#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <vector>
#include <string>
#include <iostream>
#include <FL/Fl_Output.H>
#include <cmath>
#include "stack.h"
using namespace std;

Stack elements;
string number = "";

Fl_Output *out4;
Fl_Output *out3;
Fl_Output *out2;
Fl_Output *out1;

bool haveAnswer = false;

void push(float value){
  elements.push(value);
}
float pop(){
  elements.pop();
}
float top(){
  return elements.top();
}
//for display. Returns the first, second, etc things on the stack
float first(){ 
  return top();
}
float second(){
  return elements.second();
}
float third(){
  return elements.third();
}
float fourth(){
  return elements.fourth();
}
//end display functions

void updateDisplays(){
  out4->value( (to_string(third())).c_str() );
  out3->value( (to_string(second())).c_str() );
  out2->value( (to_string(first())).c_str() );
  //out1->value( (to_string(first())).c_str() );
  if (number == ""){
    out1->value("0");
      }
  else{
  out1->value(number.c_str());
  }
}

void button1(Fl_Widget *w, void *) {
  if (haveAnswer == true){
    push(stof(number.c_str()));
    number = "1";
  }
  else{
      number = number + "1";

  }
haveAnswer = false;
  //pop();
  //push(atoi(number.c_str()));
  updateDisplays();
}
void button2(Fl_Widget *w, void *) {  if (haveAnswer == true){
    push(stof(number.c_str()));
    number = "2";
  }
  else{
      number = number + "2";

  }
haveAnswer = false;
  updateDisplays();
}
void button3(Fl_Widget *w, void *) {
   if (haveAnswer == true){
    push(stof(number.c_str()));
    number = "3";
  }
  else{
      number = number + "3";

  }
haveAnswer = false;
  updateDisplays();
}
void button4(Fl_Widget *w, void *) {
  if (haveAnswer == true){
    push(stof(number.c_str()));
    number = "4";
  }
  else{
      number = number + "4";

  }
haveAnswer = false;
  updateDisplays();
}
void button5(Fl_Widget *w, void *) {
   if (haveAnswer == true){
    push(stof(number.c_str()));
    number = "5";
  }
  else{
      number = number + "5";

  }
haveAnswer = false;
  updateDisplays();
}
void button6(Fl_Widget *w, void *) {
   if (haveAnswer == true){
    push(stof(number.c_str()));
    number = "6";
  }
  else{
      number = number + "6";
 
  }
haveAnswer = false;
  updateDisplays();
}
void button7(Fl_Widget *w, void *) {
  if (haveAnswer == true){
    push(stof(number.c_str()));
    number = "7";
  }
  else{
      number = number + "7";
  }
haveAnswer = false;
  updateDisplays();
}
void button8(Fl_Widget *w, void *) {
  if (haveAnswer == true){
    push(stof(number.c_str()));
    number = "8";
  }
  else{
      number = number + "8";

  }
haveAnswer = false;
  updateDisplays();
}
void button9(Fl_Widget *w, void *) {
  if (haveAnswer == true){
    push(stof(number.c_str()));
    number = "9";
  }
  else{
      number = number + "9";

  }
haveAnswer = false;
  updateDisplays();
}
void button0(Fl_Widget *w, void *) {
   if (haveAnswer == true){
    push(stof(number.c_str()));
    number = "0";
  }
  else{
      number = number + "0";
 
  }
haveAnswer = false;
  updateDisplays();
}


void opAddition(Fl_Widget *w,void *){
  push(stof(number.c_str()));
  float answer = first() + second();
  pop(); 
  pop();
  number = to_string(answer);
  haveAnswer = true;
  
  updateDisplays();
}
void opSubtraction(Fl_Widget *w,void *){
  push(stof(number.c_str()));
  float answer = second() - first();
  pop(); 
  pop();
  number = to_string(answer);
  haveAnswer = true;
   updateDisplays();
}
void opMultiplication(Fl_Widget *w,void *){
  push(stof(number.c_str()));
  float answer = second() * first();
  pop(); 
  pop();
  number = to_string(answer);
  haveAnswer = true;
   updateDisplays();
}
void opDivision(Fl_Widget *w,void *){
  push(stof(number.c_str()));
  float answer = second() / first();
  pop(); 
  pop();
  number = to_string(answer);
  haveAnswer = true;
   updateDisplays();
}
void opExpo(Fl_Widget *w,void *){
  push(stof(number.c_str()));
  float answer = pow(second(), first());
  pop(); 
  pop();
  number = to_string(answer);
  haveAnswer = true;
   updateDisplays();
}
void opSqrt(Fl_Widget *w,void *){
  push(stof(number.c_str()));
  float answer = pow(first(),0.5);
  pop();
  number = to_string(answer);
  haveAnswer = true;
   updateDisplays();
}
void opSign(Fl_Widget *w,void *){
  push(stof(number.c_str()));
  float answer = first()* (-1);
  pop();
  number = to_string(answer);
  haveAnswer = true;
   updateDisplays();
}
void opEnter(Fl_Widget *w,void *){
  push(atoi(number.c_str()));
  number = "";
  updateDisplays();
}
void opDrop(Fl_Widget *w,void *){
  pop(); 
  updateDisplays();
 
}


int main(int argc, char *argv[]){
  
  //create window
  Fl_Window *window = new Fl_Window(400,600);

  //displays
  
  out4 = new Fl_Output(5,5,400,25,"0");
  out4->box(FL_UP_BOX);
  out4->textsize(12);
  out3 = new Fl_Output(5,35,400,25,"0");
  out3->box(FL_UP_BOX);
  out3->textsize(12);
  out2 = new Fl_Output(5,65,400,25,"0");
  out2->box(FL_UP_BOX);
  out2->textsize(12);
  out1 = new Fl_Output(5,95,400,25,"0");
  out1->box(FL_UP_BOX);
  out1->textsize(12);
  

 //added button
 Fl_Button *b1 = new Fl_Button(20, 200, 80,80,"1");
 b1->callback(button1,0);

 Fl_Button *b2 = new Fl_Button(105, 200, 80,80,"2");
 b2->callback(button2,0);

 Fl_Button *b3 = new Fl_Button(190, 200, 80,80,"3");
 b3->callback(button3,0);

 Fl_Button *b4 = new Fl_Button(20, 290, 80,80,"4");
 b4->callback(button4,0);

 Fl_Button *b5 = new Fl_Button(105, 290, 80,80,"5");
 b5->callback(button5,0);

 Fl_Button *b6 = new Fl_Button(190, 290, 80,80,"6");
 b6->callback(button6,0);

 Fl_Button *b7 = new Fl_Button(20, 380, 80,80,"7");
 b7->callback(button7,0);

 Fl_Button *b8 = new Fl_Button(105, 380, 80,80,"8");
 b8->callback(button8,0);

 Fl_Button *b9 = new Fl_Button(190, 380, 80,80,"9");
 b9->callback(button9,0);
    
 Fl_Button *b0 = new Fl_Button(105, 470, 80,80,"0");
 b0->callback(button0,0);

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
  
  window->end();
  window->show(argc,argv);

  return Fl::run();
}
