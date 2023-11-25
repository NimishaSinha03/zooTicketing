#include <bits/stdc++.h>
using namespace std;
class zoo
{
private:
    struct guest
    {
        int age;
    };
    vector<guest> g;
    int total = 0;

public:
    int issue(int age)
    {
        if (age <= 2)
            return 0;
        else if (age > 2 && age < 18)
            return 100;
        else if (age >= 18 && age < 60)
            return 500;
        else if (age >= 60)
            return 300;
    }
    void issueticket(vector<int> &ages, int numguest)
    {
        cout << "the number of guest for the zoo " << numguest << endl;
        for (int i = 0; i < numguest; i++)
        {
            int age = ages[i];
            int totalcharge = issue(age);
            total += totalcharge;
            g.push_back({age});
        }
        cout << "the total charge is " << total << endl;
    }
    void displayticket()
    {
        for (int i = 0; i < g.size(); i++)
        {
            cout << "guest" << i << " (age : " << g[i].age << ")" << endl;
        }
    }
};
int main()
{
    zoo zooo;
    vector<int> ages;
    int numguest;
    cout << "enter the number of guests entering th zoo" << endl;
    cin >> numguest;
    for (int i = 0; i < numguest; i++)
    {
        int age;
        cin >> age;
        ages.push_back(age);
    }
    zooo.issueticket(ages, numguest);
    zooo.displayticket();
    return 0;
}
