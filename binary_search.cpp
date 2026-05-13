#include <iostream>

using namespace std;

int main()
{
    //Binary Search
    string names[5] = {"Ahmed", "Al-Walid",
                       "Khalid", "Osama",
                        "Othman"};
    int ages[5] = {22, 18, 16, 3, 57};

    string key;

    int first = 0;
    int last = 4;
    int middle;

    bool found = false;

    //Ask user for the name
    cout << "Enter name to search: ";
    cin>>key;

    //Binary Search
    while(first <= last){
        middle = (first + last)/2;
        if(names[middle] == key){
            cout << key << "was found and is aged";
               cin>>ages[middle];
           found = true;
           break;
        }
        else if(names[middle] < key){
            first = middle +1;
        }
        else{
            last = middle -1;
        }
    }

    //If name is not found
    if(found == false){
        cout << "Not found";
    }
    return 0;
}
