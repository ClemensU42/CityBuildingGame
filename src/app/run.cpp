//
// Created by clemens on 13.03.24.
//
#include "App.h"

void Application::run() {
    initVulkan();
    mainLoop();
    cleanup();
}
