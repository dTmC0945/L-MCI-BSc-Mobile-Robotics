class Point_2D { // Two-dimensional point class.
public:
    using coordinate = double; // Coordinate type.
    coordinate x; // The x coordinate of the point.
    coordinate y; // The y coordinate of the point.
};

int main() {
    Point_2D Obj;
// ...
    Point_2D::coordinate x = Obj.x;
// Point_2::Coordinate same as double
}