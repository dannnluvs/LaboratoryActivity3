#include <iostream>
using namespace std;

int main () {
    
    string productItem;
    int quantity;
    double price;
    double totalAmount;
    double cashPayment;
    double change;
    
    cout << "Enter Product Item: ";
    cin >> productItem;
    
    cout << "Enter Quantity: ";
    cin >> quantity;
    
    cout << "Enter Price: ";
    cin >> price;
    
    totalAmount = quantity * price;
    
    cout << "Total Amount: P " << totalAmount << endl;
    
    cout << "Cash Payment: P ";
    cin >> cashPayment;
    
    change = cashPayment - totalAmount;
    cout << "Change: P " << change;
    
    
    return 0;
    
}