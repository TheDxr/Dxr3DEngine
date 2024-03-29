#pragma once

#include <vulkan/vulkan_core.h>
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <string>
namespace dxr
{
class Window
{
public:
    Window(int w, int h, std::string name);
    ~Window();

    Window(const Window &)            = delete;
    Window &operator=(const Window &) = delete;

    bool shouldClose() { return glfwWindowShouldClose(window); }
    VkExtent2D getExtent() { return {static_cast<uint32_t>(width), static_cast<uint32_t>(height)}; }
    void createWindowSurface(VkInstance instance, VkSurfaceKHR *surface);
    bool resized() { return framebufferResized; }
    void resetWindowResizedFlag() { framebufferResized = false; }
private:
    static void framebufferResizeCallback(GLFWwindow *window, int width, int height);
    void init();
    int width;
    int height;
    bool framebufferResized = false;
    std::string windowName;
    GLFWwindow *window;
};
} // namespace Dxr