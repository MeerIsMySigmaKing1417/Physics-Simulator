#pragma once
#include <glm.hpp>

struct Body {
    glm::vec3 position;
    glm::vec3 velocity;
    float mass;
    float radius;
    glm::vec3 color;
};

void initSolarSystem(std::vector<Body>& bodies);
void updatePhysics(std::vector<Body>& bodies);
