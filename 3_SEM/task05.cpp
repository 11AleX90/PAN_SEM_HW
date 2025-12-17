#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
    double vx = 30.0;
    double vy = 20.0;
    double vz = 40.0;

    double dt = 1.0;
    double t_max = 10.0;

    double x = 0.0;
    double y = 0.0;
    double z = 0.0;

    vector<vector<double>> trajectory;
    trajectory.reserve(static_cast<int>(t_max / dt) + 1);

    cout << fixed << setprecision(2);
    cout << "t\t x\t y\t z" << endl;

    for (double t = 0.0; t <= t_max; t += dt) {
        trajectory.push_back({x, y, z});

        cout << t << "\t " << x << "\t " << y << "\t " << z << endl;

        x += vx * dt;
        y += vy * dt;
        z += vz * dt;
    }

    return 0;
}
