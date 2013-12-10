#include <FL/Fl_Button.H>
#include <string>

class NumberButton:public Fl_Button {

public:
 NumberButton(int x, int y, int w, int h, char *label, int init) : Fl_Button(x,y,w,h,label){
    this->num = init;
    this->copy_label(std::to_string(init).c_str());
  }
  int getNum(){return num;}

 private:
  int num;
 
};
