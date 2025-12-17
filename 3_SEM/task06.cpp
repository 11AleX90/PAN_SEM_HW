#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<double> heights;
    heights.push_back(5.0);
    heights.push_back(12.5);
    heights.push_back(8.0);
    heights.push_back(20.0);
    heights.push_back(10.0);
    heights.push_back(3.5);

    vector<double>::iterator new_end =
        remove_if(heights.begin(), heights.end(),
                  [](double h) { return h < 10.0; });

    heights.erase(new_end, heights.end());

    cout << "Updated heights:" << endl;

    if (heights.empty()) {
        cout << "Vector is empty" << endl;
    } else {
        for (size_t i = 0; i < heights.size(); i++) {
            cout << heights[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
