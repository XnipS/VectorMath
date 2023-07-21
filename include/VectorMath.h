#pragma once
#include <cmath>

namespace VM {
struct Vector2 {
 public:
  Vector2(double xPos, double yPos) {
    x = xPos;
    y = yPos;
  }
  double x, y;
};

struct Vector2Int {
 public:
  Vector2Int(int xPos, int yPos) {
    x = xPos;
    y = yPos;
  }
  int x, y;
};

// Snap vector to grid
static void VectorRoundToInt(Vector2* input, Vector2Int* output) {
  output->x = std::floor(input->x);
  output->y = std::floor(input->y);
}

// Get magnitude of vector
static void VectorMagnitude(Vector2* input, double* output) {
  *output = std::sqrt(input->x * input->x + input->y * input->y);
}

// Get distance between points
static void VectorDistance(Vector2* i, Vector2* j, double* output) {
  const double dx = j->x - i->x;
  const double dy = j->y - i->y;
  *output = std::sqrt(dx * dx + dy * dy);
}

// Sum two vectors together
static void VectorSum(Vector2* output, Vector2* i, Vector2* j) {
  output->x = i->x + j->x;
  output->y = i->y + j->y;
}

// Subtract two vectors together
static void VectorSubtract(Vector2* output, Vector2* i, Vector2* j) {
  output->x = i->x - j->x;
  output->y = i->y - j->y;
}

// Multiply two vectors together
static void VectorMultiply(Vector2* output, Vector2* i, Vector2* j) {
  output->x = i->x * j->x;
  output->y = i->y * j->y;
}

// Multiply two vectors together
static void VectorScalarMultiply(Vector2* output, Vector2* input, double j) {
  output->x = input->x * j;
  output->y = input->y * j;
}

// Normalise vector
static void VectorNormalise(Vector2* output) {
  static double mag;
  VectorMagnitude(output, &mag);
  output->x /= mag;
  output->y /= mag;
}

// Sum vector by scalar
static Vector2 VectorSumScalar(Vector2* i, float j) {
  if (i->x > 0) {
    i->x += j;
  } else {
    i->x -= j;
  }

  if (i->y > 0) {
    i->y += j;
  } else {
    i->y -= j;
  }
  return *i;
}
}  // namespace VM