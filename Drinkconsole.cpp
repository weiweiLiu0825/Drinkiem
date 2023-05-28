#include <iostream>
#include <vector>
#include <iomanip>
#include "DrinkItem.h"
#include "Drinkconsole.h"
using namespace std;

void AddNewDrink(vector<DrinkItem>& drinks)
{

    drinks.push_back(DrinkItem("����", "�j�M", 60));
    drinks.push_back(DrinkItem("����", "�p�M", 40));
    drinks.push_back(DrinkItem("���", "�j�M", 60));
    drinks.push_back(DrinkItem("���", "�p�M", 40));
    drinks.push_back(DrinkItem("�@��", "�j�M", 80));
    drinks.push_back(DrinkItem("�@��", "�p�M", 50));
    drinks.push_back(DrinkItem("�i��", "�j�M", 30));
    drinks.push_back(DrinkItem("�i��", "�p�M", 20));
}

void DisplayDrinkMenu(vector<DrinkItem>& drinks) {
    cout << setw(4) << "�s��" << setw(10) << "���ƦW��" << setw(10) << "�j�p" << setw(10) << "���" << endl;
    cout << "--------------------------------------" << endl;

    int i = 1;

    for (int j = 0; j < drinks.size(); j++) {
        cout << setw(4) << i;
        drinks[j].displayItem();
        i++;
    }
    cout << "--------------------------------------" << endl;
    cout << "�`�@��" << drinks.size() << "�Ӷ��ƫ~��" << endl;
}

int main()
{
    vector<DrinkItem> drinks;

    AddNewDrink(drinks);
    DisplayDrinkMenu(drinks);

    return 0;
}