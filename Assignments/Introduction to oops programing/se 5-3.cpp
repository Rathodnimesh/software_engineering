#include <iostream>
#include <string>
using namespace std;

class FlipkartSearch
{
public:
    // Search by product name
    void searchProduct(string productName)
    {
        cout << "Method Called: searchProduct(productName)" << endl;
        cout << "Searching for Product: " << productName << endl;
    }

    // Search by product name and category
    void searchProduct(string productName, string category)
    {
        cout << "\nMethod Called: searchProduct(productName, category)" << endl;
        cout << "Searching for Product: " << productName << endl;
        cout << "Category: " << category << endl;
    }
};

int main()
{
    FlipkartSearch obj;

    // Search only by product name
    obj.searchProduct("iPhone 15");

    // Search by product name and category
    obj.searchProduct("iPhone 15", "Mobiles");

    return 0;
}
