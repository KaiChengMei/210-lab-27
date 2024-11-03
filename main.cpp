#include <iostream>
#include <map>
#include <vector>
using namespace std;

void display(map<string, tuple<int, string, string>> villagedata)
void add(map<string, tuple<int, string, string>> villagedata)
void delete(map<string, tuple<int, string, string>> villagedata)
void increase(map<string, tuple<int, string, string>> villagedata)
void decrease(map<string, tuple<int, string, string>> villagedata)
void search(map<string, tuple<int, string, string>> villagedata)



int main() {

    // declarations
    map<string, tuple<int, string, string>> villagedata;
    int choice;
    do {
        cout << "1. Add Villager" << endl << "2. Delete Villager" << endl << "3. Increase Friendship" << endl << 
                "4. Decrease Friendship" << endl << "5. Search for Villager" << endl << "6. Exit" << endl;
        cin >> choice;
        switch (choice) {
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
        }
    }









    // insert elements into the map
    // note how the right-hand side of the assignment are the vector elements
    villagerColors["Audie"] = {"Orange", "Yellow", "Red"};
    villagerColors["Raymond"] = {"Black", "Gray", "White"};
    villagerColors.insert({"Marshal", {"Blue", "White", "Black"}});

    // access the map using a range-based for loop
    cout << "Villagers and their favorite colors (range-based for loop):" << endl;
    for (auto pair : villagerColors) {
        cout << pair.first << ": ";
        for (auto color : pair.second)
            cout << color << " ";
        cout << endl;
    }

    // access the map using iterators
    cout << "\nVillagers and their favorite colors (iterators):" << endl;
    for (map<string, vector<string>>::iterator it = villagerColors.begin(); 
                                               it != villagerColors.end(); ++it) {
        cout << it->first << ": ";
        for (auto color : it->second) {
            cout << color << " ";
        }
        cout << endl;
    }

    // delete an element
    villagerColors.erase("Raymond");

    // search for an element using .find() to avoid errors
    string searchKey = "Audie";
    auto it = villagerColors.find(searchKey);
    if (it != villagerColors.end()) {  // the iterator points to beyond the end of the map
                                       // if searchKey is not found
        cout << "\nFound " << searchKey << "'s favorite colors: ";
        for (auto color : it->second)  // range loop to traverse the value/vector
            cout << color << " ";
        cout << endl;
    } else
        cout << endl << searchKey << " not found." << endl;

    // report size, clear, report size again to confirm map operations
    cout << "\nSize before clear: " << villagerColors.size() << endl;
    villagerColors.clear();
    cout << "Size after clear: " << villagerColors.size() << endl;

    return 0;
}