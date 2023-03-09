#include "first_app.hpp"

namespace exp {
  void FirstApp::Run() {
    while (!m_window.ShouldClose()) {
      glfwPollEvents();
    }
  }

}