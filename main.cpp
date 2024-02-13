#include <iostream>

//Write a function density( ) that accepts the width, height, depth, and mass (weight) of a
//solid rectangular block allowing the use of decimal values (i.e. floating point numbers),
//and calculates the density. Test your function by calling it and displaying the result.

float density(float width, float height, float depth, float mass) {
    float density = 0;

    //density = mass / volume

    density = mass / (width * height * depth);

    return density;
};

int main() {
    std::cout << "Density of:\n- Mass: 2\n- Width: 4\n- Height: 5.5\n- Depth: 2.2" << std::endl;
    std::cout << "Density result: " << density(4, 5.5, 2.2, 2);
    return 0;
}
