class Vector_2D { // Two-dimensional vector class.
public:
    void initialize(double newX, double newY);

    double x; // The x component of the vector.
    double y; // The y component of the vector.
};

void Vector_2D::initialize(double newX, double newY) {
    x = newX; // "x" means "this->x"
    y = newY; // "y" means "this->y"
}

int main() {
    Vector_2D Obj; // Create Vector_2 called v.
    Obj.initialize(1.0, 2.0); // Initialize v to (1.0, 2.0).
}