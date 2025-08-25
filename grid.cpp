#include "grid.h"
#include <glad/glad.h>
#include <glm.hpp>

void drawGrid(const std::vector<Body>& bodies, const glm::mat4& view, const glm::mat4& projection) {
    // Minimal placeholder grid
    glBegin(GL_LINES);
    glColor3f(0.2f, 0.2f, 0.2f);
    for (int i = -500; i <= 500; i += 50) {
        glVertex3f((float)i, 0, -500);
        glVertex3f((float)i, 0, 500);
        glVertex3f(-500, 0, (float)i);
        glVertex3f(500, 0, (float)i);
    }
    glEnd();
}
