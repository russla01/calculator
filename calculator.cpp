//calc

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Button.H>
#include <FL/fl_ask.H>

int main(int argc, char *argv[])
{
  //create window
  Fl_Window *window = new Fl_Window(600,400);

  //added button


  window->end();
  window->show(argc,argv);
  return Fl::run();
}
