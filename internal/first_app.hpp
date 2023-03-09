#ifndef FIRST_APP_HPP
#define FIRST_APP_HPP

#include "window.hpp"

namespace exp {
  class FirstApp {
  public:
    static constexpr int m_width{800};
    static constexpr int m_height{600};

    void Run();
  private:
    Window m_window{m_width, m_height, "Hello Vulkan!"};
  };
}

#endif // FIRST_APP_HPP