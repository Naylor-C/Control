#include <gtkmm.h>

class Frame : public Gtk::Window
{
public:
  Frame();
};

Frame::Frame()
{
  set_title("Control-On");
  set_default_size(800, 600);
  
}
