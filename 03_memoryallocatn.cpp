#include <iostream>
using namespace std;

class agency
{
    int noplate[20];
    int plateprice[20];
    int numbering;

public:
    void donumbering(void) { numbering = 0; }
    void setprice(void);
    void displayprice(void);
};
void agency ::setprice(void)
{
    cout << "THe plate number of " << numbering + 1 << " is : " << endl;
    cin >> noplate[numbering];
    cout << "The price of plate number is : " << endl;
    cin >> plateprice[numbering];
    numbering++;
}
void agency ::displayprice(void)
{
    for (int i = 0; i < numbering; i++)
    {
        cout << "The price of number plate " << noplate[i] << " is " << plateprice[i] << endl;
    }
}

int main()
{
    agency hardik;
    hardik.donumbering();
    hardik.setprice();
    hardik.setprice();
    hardik.setprice();
    hardik.displayprice();

    return 0;
}