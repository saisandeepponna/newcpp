#include "iostream"
using namespace std;
class add{
int a,b;
public:
void sum()
{
cout << "enter any two numbers";
cin >> a >> b;
cout << a+b;
}
};
int main()
{
add s;
s.sum();
}
