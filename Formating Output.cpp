//Jose Jorge Do Amaral Marrima Matric: 20559
#include <iostream>
#include <iomanip>
using namespace std;

class purchaseClass
{
    double sbtotal;
    double price;
public:
    int choice;
    void products();
    void choosed();
};

int main(){
    purchaseClass object;
    object.products();
    object.choosed();
    return 0;
}

#include <iostream>
#include <iomanip>

using namespace std;

class products
{
private:
    int qty; //quantity
    double price;
    double sbtotal;
public:
    double total;
    double subtotal;
    int choose;
    products();
    void menu();
    void choosing();
    int getPrice();
};

products::products(){
    qty = 0;
    sbtotal = 0;
    price = 0;
    choose = 0;
}

void products::menu()
{
    cout << setw(9) << "Select the product you desire to purchase. Note: Z for zero rated and S for standard rated GST(6% vat)." << endl;
    cout << "******************************************************************************************************* \n" << endl;
    cout <<"Enter: " << endl;
    cout << setw(6) << "1 for " << setw(11) << "Yogurt " << setw(29) << "1.59 s" << endl;
    cout << setw(6) << "2 for " << setw(9) << "Rice " << setw(32) << "12.99 z" << endl;
    cout << setw(6) << "3 for " << setw(18) << "Chocolate bar " << setw(22) << "4.89 s" << endl;
    cout << setw(6) << "4 for " << setw(10) << "Mango " << setw(30) << "5.98 z" << endl;
    cout << "Enter -1 to finish the program." << endl;
    cin >> choose;
}

void products::choosing(){
    if (choose == 1)
    {
        sbtotal = 1.59 + sbtotal;
        price = (1.59 * 0.06) + price;
        cout << "You choosed yogurt." << endl;
        cout << endl;
    }
    if (choose == 2)
    {
        sbtotal = 12.99 + sbtotal;
        price = 12.99 + price;
        cout << "You choosed rice." << endl;
        cout << endl;
    }
    if (choose == 3)
    {
        sbtotal = 4.89 + sbtotal;
        price = (4.89 * 0.06) + price;
        cout << "You choosed chocolate bar." << endl;
        cout << endl;
    }
    if (choose == 4)
    {
        sbtotal = 5.98 + sbtotal;
        price = 5.98 + price;
        cout << "You choosed mango." << endl;
        cout << endl;
    }
    subtotal = subtotal + sbtotal;
    total = total + price;
}

int main()
{
    products object;
    products();
    do{
        object.menu();
        object.choosing();
    }while(object.choose != -1);
    cout << endl;
    cout << "Your subtotal is " << setw(10) << " " << setprecision(4) << object.subtotal << endl;
    cout << "Your total price is " << setw(10) << " " << setprecision(4) << object.total << endl;
    
    return 0;
}