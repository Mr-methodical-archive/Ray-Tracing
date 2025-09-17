#include <iostream>
using namespace std;

int main() {
    // Image
    int image_width = 256;
    int image_height = 256;

    // Render
    cout << "P3\n" << image_width << ' ' << image_height << "\n255\n";

    for (int j = 0; j < image_height; ++j) {
        for (int i = 0; i < image_width; ++i) {
            auto r = double(256-(i/2)) / (image_width-1);
            auto g = double(256- ((2 * j) / 3)) / (image_height-1);
            auto b = double(256-i);

            int ir = int(255.999 * r);
            int ig = int(255.999 * g);
            int ib = int(255.999 * b);

            cout << ir << ' ' << ig << ' ' << ib << '\n';
        }
    }
    clog << "\rDone.                \n";
}