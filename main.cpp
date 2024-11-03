#include <iostream>
#include <map>
#include <vector>
using namespace std;

void display(map<string, tuple<int, string, string>> villagerdata) {
    cout << "Villager details: " ;
    for (auto& pair : villagerdata) {
        auto& [friendship, species, catchphrase] = pair.second;
        cout << pair.first << "[" << friendship << "," << species << "," << catchphrase << "]" << endl ;
    }
}

void add(map<string, tuple<int, string, string>> villagerdata) {
    string name, species, catchphrase;
    int friendship;
    cout << "Villager name: " ;
    cin >> name;
    cout << endl << "Friendship level (0-10): ";
    cin >> friendship;
    cout << "Species: ";
    cin.ignore();
    getline(cin, species);
    cout << "Catchphrase: ";
    getline(cin, catchphrase);

    villagerdata[name] = make_tuple(friendship, species, catchphrase);
    cout << name << " added." << endl;
}

void delete(map<string, tuple<int, string, string>> villagerdata) {
    string name;
    cout << "Enter the name of the villager to delete: " ;
    cin >> name;
    villagerData.erase(name);
    cout << name << "deleted." << endl;
}

void increase(map<string, tuple<int, string, string>> villagerdata) {
    string name;
    cout << "Enter the name of the villager to increase friendship: ";
    cin >> name;
    auto it = villagerdata.find(name);
    auto& [friendship, species, catchphrase] = it->second;
    if (friendship < 10) {
        friendship++;
        cout << "Friendship succesfully increased for " << name << endl;
    }
    else {
        cout << "Friendship is already at max for " << name << endl;
    }

}

void decrease(map<string, tuple<int, string, string>> villagerdata) {
    string name;
    cout << "Enter the name of the villager to increase friendship: ";
    cin >> name;
    auto it = villagerdata.find(name);
    auto& [friendship, species, catchphrase] = it->second;
    if (friendship > 0) {
        friendship--;
        cout << "Friendship succesfully decreased for " << name << endl;
    }
    else {
        cout << "Friendship is already at min for " << name << endl;
    }
}

void search(map<string, tuple<int, string, string>> villagerdata) {
    string name;
    cout << "Enter the name of the villager to search: ";
    cin >> name;
    if ()
    auto it = villagerdata.find(name);

}



int main() {

    // declarations
    map<string, tuple<int, string, string>> villagerdata;
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