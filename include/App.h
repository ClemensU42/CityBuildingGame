//
// Created by clemens on 13.03.24.
//

#include <vulkan/vulkan.h>

#ifndef APP_H
#define APP_H

class Application{
public:
    void run();
private:
    void initVulkan();
    void mainLoop();
    void cleanup();
};

#endif //APP_H
