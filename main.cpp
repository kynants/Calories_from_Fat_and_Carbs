#include <iostream>
using namespace std;

int main() {
    // Calories from Fat = Fat Grams * 9
    // Calories from Carbs = Carb Grams * 4

    float calFromFat;
    float fatGrams;
    float calFromCarbs;
    float carbGrams;

    cout << "How many grams of fat do you consume/day? ";
    cin >> fatGrams;
    cout << endl;

    cout << "How many grams of carbs do you consume/day? ";
    cin >> carbGrams;
    cout << endl;

    calFromFat = fatGrams * 9;
    cout << "Calories from Fat: ";
    cout << calFromFat << endl;

    calFromCarbs = carbGrams * 4;
    cout << "Calories from Carbs: ";
    cout << calFromCarbs;

    return 0;
}