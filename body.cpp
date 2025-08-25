#include "body.h"
#include <vector>

void initSolarSystem(std::vector<Body>& bodies) {
    // Sun
    bodies.push_back({ glm::vec3(0,0,0), glm::vec3(0,0,0), 1000.f, 50.f, glm::vec3(1,1,0) });
    // Planet example
    bodies.push_back({ glm::vec3(200,0,0), glm::vec3(0,0.5f,0), 10.f, 10.f, glm::vec3(0,0,1) });
}

void updatePhysics(std::vector<Body>& bodies) {
    // Very simple orbital physics placeholder
    for (auto& b : bodies) {
        b.position += b.velocity;
    }
}
