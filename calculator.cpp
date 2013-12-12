#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include <vector>
#include <string>
#include <iostream>
#include <FL/Fl_Output.H>

using namespace std;

vector <int> elements;
string number = "";

Fl_Output *out4;
Fl_Output *out3;
Fl_Output *out2;
Fl_Output *out1;

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
  number = number + "1";
  //pop();
  //push(atoi(number.c_str()));
  updateDisplays();
}
void button2(Fl_Widget *w, void *) {
  number = number + "2";
  updateDisplays();
}
void button3(Fl_Widget *w, void *) {
  number = number + "3";
  updateDisplays();
}
void button4(Fl_Widget *w, void *) {
  number = number + "4";
  updateDisplays();
}
void button5(Fl_Widget *w, void *) {
  number = number + "5";
  updateDisplays();
}
void button6(Fl_Widget *w, void *) {
  number = number + "6";
  updateDisplays();
}
void button7(Fl_Widget *w, void *) {
  number = number + "7";
  updateDisplays();
}
void button8(Fl_Widget *w, void *) {
   number = number + "8";
  updateDisplays();
}
void button9(Fl_Widget *w, void *) {
   number = number + "9";
  updateDisplays();
}
void button0(Fl_Widget *w, void *) {
   number = number + "0";
  updateDisplays();
}


void opAddition(Fl_Widget *w,void *){
   updateDisplays();
}
void opSubtraction(Fl_Widget *w,void *){
   updateDisplays();
}
void opMultiplication(Fl_Widget *w,void *){
   updateDisplays();
}
void opDivision(Fl_Widget *w,void *){
   updateDisplays();
}
void opExpo(Fl_Widget *w,void *){
   updateDisplays();
}
void opSqrt(Fl_Widget *w,void *){
   updateDisplays();
}
void opSign(Fl_Widget *w,void *){
   updateDisplays();
}
void opEnter(Fl_Widget *w,void *){
  push(atoi(number.c_str()));
  number = "";
  updateDisplays();
}
void opDrop(Fl_Widget *w,void *){
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
