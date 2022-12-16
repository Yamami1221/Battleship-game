#include<iostream>

using namespace std;

bool randomtruefalse() {
    int r = rand() % 2;
    if (r == 1){
        return 1;
    }else{
        return 0;
    }
}

int main() {
    int BH = 0,BW = 0,shipcount = 0,i = 0,j = 0,k = 0,row = 0,column = 0,turns = 0;
    cout << "Welcome to battle ship game!" << endl;
    cout << "Let's specify size of board" << endl;
    cout << "Enter board hight: "; cin >> BH;
    cout << "Enter board width: "; cin >> BW;
    bool ships[BH][BW];
    for (i = 0; i < BH; i++){
        for (j = 0; j < BW; j++) {
            ships[i][j] = randomtruefalse();
            if (ships[i][j] == true) {
                shipcount++;
            }
        }
    }
    int limit = shipcount;
    cout << "Number of ships = " << shipcount << endl;
    cout << "Good luck!" << endl;
    while (k < limit){
        cout << "Enter coordinates" << endl;
        while (row < 1 || row > BW){
            cout << "Enter row (1 to " << BW << "): "; cin >> row;
            if (row < 1 || row > BW){
                cout << "Invalid input, try again." << endl;
            }
        }
        while (column < 1 || column > BH){
            cout << "Enter column (1 to " << BH << "): "; cin >> column;
            if (column < 1 || column > BH){
                cout << "Invalid input, try again." << endl;
            }
        }
        if (ships[column-1][row-1] == 1){
            ships[column-1][row-1] = 0;
            cout << "You hit a ship!" << endl;
            shipcount--;
            cout << "Number of ships left = " << shipcount << endl;
            k++;
        }else{
            cout << "You missed!,Try again." << endl;
        }
        row = 0;
        column = 0;
        turns++;
    }
    cout << "Victory!" << endl;
    cout << "You won in " << turns << " turns" << endl;
    return 0;
}
