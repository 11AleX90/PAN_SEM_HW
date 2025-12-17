#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<double> times;
    vector<double> heights;

    times.push_back(0.0);
    times.push_back(1.0);
    times.push_back(2.0);
    times.push_back(3.0);
    times.push_back(4.0);
    times.push_back(5.0);

    heights.push_back(50.0);
    heights.push_back(30.0);
    heights.push_back(15.0);
    heights.push_back(5.0);
    heights.push_back(-2.0);
    heights.push_back(-10.0);

    vector<double>::iterator it =
        find_if(heights.begin(), heights.end(),
                [](double h) { return h <= 0.0; });

    if (it == heights.end()) {
        cout << "No fall detected in given range" << endl;
    } else {
        size_t idx = distance(heights.begin(), it);
        double t_fall = times[idx];

        cout << "Fall time: " << t_fall << endl;
        cout << "Height at fall: " << heights[idx] << endl;
    }

    return 0;
}
