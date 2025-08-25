#pragma once
#include <vector>
#include "body.h"
#include <glm.hpp>

void drawGrid(const std::vector<Body>& bodies, const glm::mat4& view, const glm::mat4& projection);
