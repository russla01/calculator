//calc

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>
#include "numButton.h"

void numButton(Fl_Widget *w, void *) {
  NumberButton *myButton = (NumberButton *)w;
  int num = myButton->getNum();
  myButton->copy_label(std::to_string(num).c_str());
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
//cout << "hello" << endl;
// cout << "good bye" << endl;
  window->end();
  window->show(argc,argv);
  return Fl::run();
}
