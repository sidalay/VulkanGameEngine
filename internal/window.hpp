#ifndef WINDOW_HPP
#define WINDOW_HPP

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

#include <string>

namespace exp {
  class Window {
  public:
    Window(int width, int height, std::string name);
    ~Window();

    Window(const Window&) = delete;
    Window& operator=(const Window&) = delete;

    bool ShouldClose() {return glfwWindowShouldClose(m_window);}

  private:
    void InitWindow();

    const int m_width{};
    const int m_height{};
    std::string m_name{};
    GLFWwindow *m_window;
  };
}

#endif // WINDOW_HPP