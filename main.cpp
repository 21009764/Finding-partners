#include <iostream>
#include<string>
using namespace std;

int main()
{
    string name;
    int age;
    char gender;
    bool wantsKids, likesCars, ;


    cout << "Welcome to the Partner Picker!\n";
    cout << "Please answer a few questions to help us find your ideal partner.\n";

    cout << "What's your name? ";
    getline(cin, name);

    cout << "How old are you? ";
    cin >> age;

    cout << "What's your gender? (M/F) ";
    cin >> gender;

    cout << "Do you want kids? (1 for Yes, 0 for No) ";
    cin >> wantsKids;

    cout << "Do you like pets? (1 for Yes, 0 for No) ";
    cin >> likesCars;


    cout << "\nBased on your answers, here are some potential partners for you:\n";

    if (age >= 18 && age <= 30 && gender == 'F' && !wantsKids && likesCars) {
        cout << "1. Alex (25, M)\n";
        cout << "2. Sam (28, M)\n";
    } else if (age >= 25 && age <= 35 && gender == 'M' && wantsKids && likesCars) {
        cout << "1. Emily (30, F)\n";
        cout << "2. Sarah (27, F)\n";
    } else {
        cout << "Sorry, we couldn't find any matches for you based on your criteria.\n";
    }

    return 0;
}
