#pragma once
#include <vector>
#include "body.h"
#include <GLFW/glfw3.h>

void initImGui(GLFWwindow* window);
void startImGuiFrame();
void drawBodyGUI(Body& b);
void endImGuiFrame();
void cleanupImGui();
