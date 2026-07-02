#include <iostream>
using namespace std;

int main()
{
    int itemCount = 15;
    char categories[7][20] = { "Fruits", "Grains", "Dairy", "Masalas", "Toys", "Soft Drinks", "Snacks" };
    char items[15][20] = { "Apples", "Bananas", "Rice", "Milk", "Eggs", "Turmeric", "Chili Powder", "Toy Car", "Doll", "Coke", "Pepsi", "Chips", "Biscuits", "Chocolate", "Juice" };
    float prices[15] = { 100.0, 50.0, 200.0, 150.0, 12.0, 40.0, 60.0, 500.0, 300.0, 50.0, 50.0, 30.0, 20.0, 80.0, 100.0 };
    int stock[15] = { 10, 20, 15, 10, 30, 25, 20, 5, 8, 20, 20, 50, 40, 30, 15 }; // Available stock for each item

    int choice;
    int cart[15] = { 0 }; // To store quantities of items purchased
    float totalBill = 0.0;

    cout << "==========================================" << endl;
    cout << "=====                                =====" << endl;
    cout << "=====    Welcome to Grocery Store    =====" << endl;
    cout << "=====                                =====" << endl;
    cout << "==========================================" << endl;;
    cout << endl;

    do
    {
        cout << "\nMenu:" << endl;
        cout << "1. View Items by Category" << endl;
        cout << "2. Buy Items" << endl;
        cout << "3. View Cart" << endl;
        cout << "4. Checkout" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1)
        {
            // Display items by category
            cout << "\nAvailable Items by Category:" << endl;
            int startIndex = 0;
            for (int i = 0; i < 7; i++) {
                cout << "\n" << categories[i] << ":\n";
                for (int j = startIndex; j < itemCount; j++)
                {
                    if ((i == 0 && j >= 2) || (i == 1 && j >= 3) || (i == 2 && j >= 5) ||
                        (i == 3 && j >= 7) || (i == 4 && j >= 9) || (i == 5 && j >= 11) || (i == 6 && j >= 15))
                    {
                        startIndex = j;
                        break;
                    }
                    cout << j + 1 << ". " << items[j] << " - Rs." << prices[j] << " (Stock: " << stock[j] << ")\n";
                }
            }
        }
        else if (choice == 2)
        {
            // to buy items
            int itemNumber, quantity;
            cout << "\nEnter the item number to buy ( 1 - 15 ): ";
            cin >> itemNumber;

            if (itemNumber < 1 || itemNumber > itemCount) //to handle valid input
            {
                cout << "Invalid item number!" << endl;
            }
            else
            {
                cout << "Enter quantity: ";
                cin >> quantity;

                int index = itemNumber - 1;//to track the index of different things
                if (stock[index] == 0)
                {
                    cout << "Sorry, " << items[index] << " is out of stock!" << endl;
                }
                else if (quantity > stock[index])
                {
                    cout << "Sorry, we only have " << stock[index] << " " << items[index] << " left in stock." << endl;
                }
                else
                {
                    cart[index] += quantity;
                    stock[index] -= quantity;
                    totalBill += quantity * prices[index];
                    cout << quantity << " " << items[index] << " added to your cart." << endl;
                }
            }
        }
        else if (choice == 3)
        {
            // View cart
            cout << "\nYour Cart:" << endl;
            bool isEmpty = true;//to check if cart is empty or not
            for (int i = 0; i < itemCount; i++)
            {
                if (cart[i] > 0)
                {
                    isEmpty = false;
                    cout << items[i] << " - Quantity: " << cart[i] << " - Subtotal: Rs." << cart[i] * prices[i] << endl;
                }
            }
            if (isEmpty)
            {
                cout << "Your cart is empty!" << endl;
            }
        }
        else if (choice == 4)
        {
            // Checkout
            bool isEmpty = true;
            for (int i = 0; i < itemCount; i++)
            {
                if (cart[i] > 0)
                {
                    isEmpty = false;
                    cout << items[i] << " - Quantity: " << cart[i] << " - Subtotal: Rs." << cart[i] * prices[i] << endl;
                }
            }
            if (isEmpty)
            {
                cout << "\nYour cart is empty! You have not bought anything." << endl;//if cart is empty
            }
            else
            {
                cout << "Total Bill: Rs." << totalBill << endl;
                cout << "Thank you for shopping with us!" << endl;
                break;
            }
        }
        else if (choice == 5)
        {
            cout << "\nExiting the system. Have a great day!" << endl;
        }
        else
        {
            cout << "\nInvalid choice! Please try again." << endl;
        }
    } while (choice != 5 && choice != 4);

    return 0;
}