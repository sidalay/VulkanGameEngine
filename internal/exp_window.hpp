#ifndef EXP_WINDOW_HPP
#define EXP_WINDOW_HPP

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace exp {
  class ExpWindow {
  public:
    ExpWindow(int width, int height, std::string name);
    ~ExpWindow();

  private:
    void InitWindow();

    const int m_width{};
    const int m_height{};
    std::string m_name{};
    GLFWwindow *m_window;
  };
}

#endif // S_WINDOW_HPP