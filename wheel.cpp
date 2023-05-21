#include <cmath>

class Wheel {
    int radius = 0;
    float rpm = 0;
    int wTime = 0;
    int distance = 0;
    int speed = 0;
    int length = 0;
    int rad = 0;
    const float pi = 3.14159;

    void getWheelSpeed () {
        speed = (pi * radius) / 30;
    }

    void getTurnSpeed () {
        rad = (pow(pi, 2) * length) / 360;

    }

    void getWheelDistance () {
        distance = speed * wTime;
    }
};