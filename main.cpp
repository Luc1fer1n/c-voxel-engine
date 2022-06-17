#include <vulkan/vulkan.h>
#include <iostream>
#include <stdexcept>
#include <cstdlib>

#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>

const uint64_t WIDTH = 720;
const uint64_t HEIGHT = 480;
const char* NAME = "C++ Voxel Engine a1.0.0";

class HelloTriangleApplication {
    public:
        void run() {
            initWindow();   /* Initializes window */
            initVulkan();   /* Initializes vulkan app */
            mainLoop();     /* Main program loop */
            cleanup();      /* Cleanup after porgram is done */
        }
    private:
        /* Fields */
        GLFWwindow* window;
        /* Functions */
        void initVulkan() {

        }

        void mainLoop() {
            while (!glfwWindowShouldClose(window)) {
                glfwPollEvents();
            }
        }
        
        void cleanup() {
            glfwDestroyWindow(window);
            glfwTerminate();
        }

        void initWindow() {
            glfwInit();
            glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);
            glfwWindowHint(GLFW_RESIZABLE, GLFW_FALSE);
            window = glfwCreateWindow(WIDTH, HEIGHT, NAME, nullptr, nullptr);

        }
};

int main() {
    HelloTriangleApplication app;
    try {
        app.run();
    } catch (const std::exception& e) {
        std::cerr << e.what() <<std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}