#include "exp_window.hpp"

namespace exp {

  ExpWindow::ExpWindow(int width, int height, std::string name)
    : m_width{width}, 
      m_height{height}, 
      m_name{name} 
  {
    InitWindow();
  }

  ExpWindow::~ExpWindow() {
    glfwDestroyWindow(m_window);
    glfwTerminate();
  }

  void ExpWindow::InitWindow() {
    glfwInit();
    glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
    GLFWWINDOWHINT(GLFW_RESIZABLE, GLFW_FALSE);

    m_window = glfwCreateWindow(m_width, m_height, m_name.c_str(), nullptr, nullptr);
  }
}