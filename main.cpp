#include <iostream>

using namespace std;

string pizza_Adds;
int pizza_num = 1;
int adds_num;
string name;
int phone_num;
string street;
int home_num;
int rate;
string payment;
string pizzaTypes[] = {"Chicken", "Beef", "Vegetables", "Margherita"};
int num[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
int x;
int y;
int z;

const int maxPizzas = 50;
string selectedAdd;
string selectedPizzas = "";
int numSelectedPizzas = 0;

// Function 2 by (Malak Mohamed) (42310525)
void PizzaTypes1() //display the menu
{
    cout << "\n----------------------- Welcome to your Pizza App -----------------------\n";
    cout << "Pizza Types:" << "\n";
    cout << "The price of any pizza = 200 EGP\n";
    for (int i = 0; i < num[3]; i++)
    {
        cout << num[i] << "- " << pizzaTypes[i] << "\n";
    }
    cout << "**************\n";
}

// Function 2  by (Eyad Abdelrahman Syam)  (42310267)

void PizzaTypes2()// choose which type of pizza
{
    string Chicken[] = {"Ranch Chicken", "BBQ Chicken", "Super Supreme Pizza"};
    string Beef[] = {"Pepperoni", "Meatballs", "Ground beef"};
    cout << "**************\n";
    cin >> z;//z is a global variable
    cout << "**************\n";
    if (z == 1)
    {
        cout << "You have 3 Types of Chicken Pizza\n";
        for (int i = 0; i < 3; i++)
        {
            cout << num[i] << "- " << Chicken[i] << endl;
        }
        cout << "**************\n";
        cout << "Please Choose Your Type Of Chicken Pizza\n";
        cout << "**************\n";
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "You chose Ranch Chicken \n";
            selectedPizzas += "Ranch Chicken, ";
            break;

        case 2:
            cout << "You chose BBQ Chicken \n";
            selectedPizzas += "BBQ Chicken, ";
            break;

        case 3:
            cout << "You chose Super Supreme Pizza \n";
            selectedPizzas += "Super Supreme Pizza, ";
            break;
        }
    }
    else if (z == 2)
    {
        cout << "**************\n";
        cout << "You have 3 Types of Beef Pizza\n";
        for (int j = 0; j < 3; j++)
        {
            cout << num[j] << "- " << Beef[j] << endl;
        }
        cout << "**************\n";
        cout << "Please Choose Your Type Of Beef Pizza\n";
        cout << "**************\n";
        cin >> y;
        switch (y)
        {
        case 1:
            cout << "You Chose Pepperoni \n";
            selectedPizzas += "Pepperoni, ";
            break;
        case 2:
            cout << "You Chose Meatballs \n";
            selectedPizzas += "Meatballs, ";
            break;
        case 3:
            cout << "You Chose Ground beef \n";
            selectedPizzas += "Ground beef, ";
            break;
        }
    }
    else if (z == 3)
    {
        cout << "You chose Vegetarian \n";
        cout << "**************\n";
        selectedPizzas += "Vegetarian, ";
    }
    else if (z == 4)
    {
        cout << "You chose Margherita \n";
        cout << "**************\n";
        selectedPizzas += "Margherita, ";
    }
    else if (z > 4)
    {
        while(z > 4)
        {
         cout<<"Wrong, Please try again \n";
        cin>>z;
          if (z == 1)
    {
        cout << "You have 3 Types of Chicken Pizza\n";
        for (int i = 0; i < 3; i++)
        {
            cout << num[i] << "- " << Chicken[i] << endl;
        }
        cout << "**************\n";
        cout << "Please Choose Your Type Of Chicken Pizza\n";
        cout << "**************\n";
        cin >> x;
        switch (x)
        {
        case 1:
            cout << "You chose Ranch Chicken \n";
            selectedPizzas += "Ranch Chicken, ";
            break;

        case 2:
            cout << "You chose BBQ Chicken \n";
            selectedPizzas += "BBQ Chicken, ";
            break;

        case 3:
            cout << "You chose Super Supreme Pizza \n";
            selectedPizzas += "Super Supreme Pizza, ";
            break;
        }
    }
    else if (z == 2)
    {
        cout << "**************\n";
        cout << "You have 3 Types of Beef Pizza\n";
        for (int j = 0; j < 3; j++)
        {
            cout << num[j] << "- " << Beef[j] << endl;
        }
        cout << "**************\n";
        cout << "Please Choose Your Type Of Beef Pizza\n";
        cout << "**************\n";
        cin >> y;
        switch (y)
        {
        case 1:
            cout << "You Chose Pepperoni \n";
            selectedPizzas += "Pepperoni, ";
            break;
        case 2:
            cout << "You Chose Meatballs \n";
            selectedPizzas += "Meatballs, ";
            break;
        case 3:
            cout << "You Chose Ground beef \n";
            selectedPizzas += "Ground beef, ";
            break;
        }
    }
    else if (z == 3)
    {
        cout << "You chose Vegetarian \n";
        cout << "**************\n";
        selectedPizzas += "Vegetarian, ";
    }
    else if (z == 4)
    {
        cout << "You chose Margherita \n";
        cout << "**************\n";
        selectedPizzas += "Margherita, ";
    }
    }
}
}
// Function 3 by (Malak mahmoud abdelsalam) (42310427)
void pizza_adds() // display the adds and take it from user
{
    int choise_num;
    cout << "**************\n";
    cout << "The price of any add is 5 EGP\n";
    pizza_Adds = "1-Mozzarella\n2-Pepperoni\n3-pickles\n4-salad\n5-onion\n6-coleslaw\n7-fries\n8-beef\n9-pineappe\n10-katchup\n11-melted chees\n12-spiro spathes\n13-No adds\n\n";

    int count = 0;
    cout << "ADDS :\n\n";
    cout << pizza_Adds;
    cout << "**************\n";

    cout << "How many adds do you want ? \n";
    cin >> adds_num;
    cout << " which adds do you want (click num)? \n";

    while (count < adds_num)
    {
        cin >> choise_num;

        switch (choise_num)
        {
        case 1:
            cout << "Your choise is :Mozzarella \n";
            selectedAdd += "Mozzarella, ";
            break;
        case 2:
            cout << "Your choise is :pepperoni \n";
            selectedAdd += "pepperoni,";
            break;
        case 3:
            cout << "Your choise is :pickles \n";
            selectedAdd += "pickles,";
            break;
        case 4:
            cout << "Your choise is :salad \n";
            selectedAdd += "salad,";
            break;
        case 5:
            cout << "Your choise is :onion \n";
            selectedAdd += "onion,";
            break;
        case 6:
            cout << "Your choise is :coleslaw \n";
            selectedAdd += "coleslaw,";
            break;
        case 7:
            cout << "Your choise is :fries \n";
            selectedAdd += "fries,";
            break;
        case 8:
            cout << "Your choise is :beef \n";
            selectedAdd += "beef,";
            break;
        case 9:
            cout << "Your choise is :pineapple \n";
            selectedAdd += "pineapple,";
            break;
        case 10:
            cout << "Your choise is :Katchup \n";
            selectedAdd += "Katchup,";
            break;
        case 11:
            cout << "Your choise is :Melted cheese\n";
            selectedAdd += "cheese,";
            break;
        case 12:
            cout << "Your choise is :Spiro spathes \n";
            selectedAdd += "Spiro spathes,";

            break;
        case 13:
            selectedAdd += "Non";
            break;
        }
        count++;
    }
}

// Function 4 (Rahma yasser) (42310387)
void communication() // take customer data
{
    cout << "****************\n";
    cout << "--------------[Customer data]------------------\n\n";
    cout << "Enter your name :\n";
    cin.ignore();
    getline(cin, name);
    cout << "Enter your phone number :\n";
    cin >> phone_num;
    cout << "Enter your street :\n";
    cin.ignore();
    getline(cin, street);
    cout << "Enter building number:\n";
    cin >> home_num;
    int choice;
    string password;
    cout << "choose payment method\n";
    cout << "1.pay by cash\n";
    cout << "2.pay by visa\n";

    cout << "enter your choose (1 for cash 2 for visa)\n";
    cin >> choice;

    if (choice == 1)
    {
        cout << "You chose to pay with cash ";
        cout << "\n----------------------Thank You MR." << name << " ------------------------" << endl;
    }
    else if (choice == 2)
    {
        cout << "You chose to pay with visa \n";
        cout << "Please Enter The Password : ";
        cin >> password;
        cout << "\n----------------------Thank You MR." << name << " ------------------------" << endl;
    }
    else
    {
        while (choice != 1 && choice != 2)
        {
            cout << "Wrong, Please Try again \n";
            cin >> choice;

            if (choice == 1)
            {
                cout << "You chose to pay with cash ";
                cout << "\n----------------------Thank You MR." << name << " ------------------------" << endl;
            }
            else if (choice == 2)
            {
                cout << "You chose to pay with visa \n";
                cout << "Please Enter The Password : ";
                cin >> password;
                cout << "\n----------------------Thank You MR." << name << " ------------------------" << endl;
            }
        }
    }
}

// Function 5 (mohamed ayman farouk) (42310261)
void receipt() // display the receipt
{
    cout << "\n\n----------------------- [Receipt] ----------------------------" << "\n";
    cout << "customer name :\t\t\t\t" << name << endl;
    cout << "phone number:  \t\t\t\t" << phone_num << endl;
    cout << "Address:       \t\t\t\t" << home_num << "-" << street << endl;

    double price1;
    price1 = pizza_num * 200;
    cout << "Selected Pizzas:\t\t\t" << selectedPizzas << endl;
    cout << "price of pizza is:\t\t\t" << price1 << " EGP" << endl;
    double price2;
    price2 = adds_num * 5;
    cout << "Selected Adds : \t\t\t" << selectedAdd << endl;
    cout << "price of adds is:\t\t\t" << price2 << " EGP" << endl;
    double Delivery_Service = 20;
    cout << "Delivery Service is:\t\t\t" << Delivery_Service << " EGP" << endl;
    double cost;
    cost = price1 + price2 + Delivery_Service;
    cout << "The total cost :\t\t\t" << cost << " EGP" << endl;
    int k;
    cout << "\n Re-enter the cost for confirmation \n";
    cin >> k;
    if (k == cost)
    {
        cout << "\n ---------------------- Thank You Mr/Mrs." << name << "----------------------" << endl;
    }

    while (k != cost)
    {
        cout << "Wrong, Please Try again \n";
        cin >> k;
        if (k == cost)
        {
            cout << "\n ---------------------- Thank You Mr/Mrs." << name << "----------------------" << endl;
        }
    }

    cout << "\n";
}

/*
BY: mohamed ayman farouk (42310261)
*/
void rating() // The rating
{
    string comment;
    cout << "--------------------Please rate the app--------------------\n";
    cout << "1-Amazing (**)\n2-Great(*)\n3-Very good(*)\n4-Good(*)\n5-Bad()";
    cout << "\nclick num :\n";
    cin >> rate;
    cout << "Thank you Mr/Mrs" << name << "\n\nHappy meal";
}

int main()
{
    PizzaTypes1();
    cout << "how many pizza do you want ?  \n";
    cin >> pizza_num;

    if (pizza_num > 1)
    {
        for (int i = 0; i < pizza_num; i++)
        {
            cout << "Choose Which Type you want of pizza\n";
            PizzaTypes2();
        }
    }
    else
    {
        cout << "Choose Which Type you want of pizza\n";
        PizzaTypes2();
    }

    string anykey_Ad;
    cout << "Please Enter any key to show the Adds ";
    cin >> anykey_Ad;
    system("cls");
    pizza_adds();
    system("cls");
    communication();
    string anykey_R;
    cout << "Please Enter any key to show the Receipt ";
    cin >> anykey_R;
    system("cls");
    receipt();
    cout << "\n";
    system("cls");
    rating();

    return 0;
}
