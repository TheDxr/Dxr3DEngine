#pragma once

#include <memory>
#include <string>
#include <vector>
#include "Device.h"
#include "Pipeline.h"
#include "SwapChain.h"
#include "Window.h"

#include <spdlog/spdlog.h>

namespace Dxr
{
class Application
{
public:
    Application(int width, int height, int posX = 0, int posY = 0, std::string title = "Application") :
        window(width, height, "Hello Vulkan!")
    {
        // auto console = spdlog::stdout_color_mt("console");
        CreatePipelineLayout();
        CreatePipeline();
        CreateCommandBuffers();
    }

    virtual ~Application()                      = default;
    Application(const Application &)            = delete;
    Application &operator=(const Application &) = delete;

    // delta mTime between frame and mTime from beginning
    // float GetFrameDeltaTime();
    // float GetTime() const;
    void Run();
    Window& GetWindow() { return window; }
protected:
    Window window;
    virtual void Update();
    // Time:
    //    float mTime = 0.0f;
    //    float mDeltaTime = 0.0f;

private:
    void CreateCommandBuffers();
    void CreatePipelineLayout();
    void CreatePipeline();

    Device device_{window};
    SwapChain swapChain{device_, window.GetExtent()};
    VkPipelineLayout pipelineLayout;

    std::unique_ptr<Pipeline> pipeline;
    std::vector<VkCommandBuffer> commandBuffers;
};
} // namespace Dxr
