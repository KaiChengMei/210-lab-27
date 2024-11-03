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
    if (it != villagerdata.end()) {
        auto it = villagerdata.find(name)= it->second;
        cout << "Found " << name << "[" << friendship << "," << species << "," << catchphrase << "]" << endl ;
    }
    else {
        cout << name << " is not found." << endl;
    }
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
                add(villagerdata);
            case 2:
                delete(villagerdata);
            case 3:
                increase(villagerdata);
            case 4:
                decrease(villagerdata);
            case 5:
                search(villagerdata);
            case 6:
            cout << "ByeBye....." << endl;
            break;
        }
        display(villagerdata);
    };
    return 0;

}