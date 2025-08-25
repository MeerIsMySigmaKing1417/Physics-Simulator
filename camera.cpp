#include "camera.h"
#include <gtc/matrix_transform.hpp>
#include <GLFW/glfw3.h>
#include <iostream>

Camera::Camera(glm::vec3 position)
    : Position(position), Front(glm::vec3(0, 0, -1)), Up(glm::vec3(0, 1, 0)),
    Yaw(-90.f), Pitch(0.f), MovementSpeed(50.f), MouseSensitivity(0.1f), Zoom(45.f) {
}

glm::mat4 Camera::getViewMatrix() {
    return glm::lookAt(Position, Position + Front, Up);
}

// Dummy implementations for now
void processInput(GLFWwindow* window, Camera& camera) {
    float speed = camera.MovementSpeed * 0.01f;
    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS) camera.Position += camera.Front * speed;
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS) camera.Position -= camera.Front * speed;
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS) camera.Position -= glm::normalize(glm::cross(camera.Front, camera.Up)) * speed;
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS) camera.Position += glm::normalize(glm::cross(camera.Front, camera.Up)) * speed;
    if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS) camera.Position.y += speed;
    if (glfwGetKey(window, GLFW_KEY_LEFT_CONTROL) == GLFW_PRESS) camera.Position.y -= speed;
}

void mouse_callback(GLFWwindow* window, double xpos, double ypos) {}
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset) {}
void framebuffer_size_callback(GLFWwindow* window, int width, int height) {
    glViewport(0, 0, width, height);
}
