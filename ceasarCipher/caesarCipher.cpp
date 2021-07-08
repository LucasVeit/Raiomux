#include <iostream>
#include <string>

using namespace std;


int rot_n(int letter, int key, int value, int choice){
    int rotted;
    rotted = ((letter - value + key + (24 * choice)) % 26 ) + value;
    return rotted;
}

int caesar(int letter, int key, int choice){
    if(letter > 64 && letter < 91)
        return rot_n(letter, key, 65, choice);
    else if(letter > 96 && letter < 123)
        return rot_n(letter, key, 97, choice);
    return letter;
}

int main(){
    string plainText;
    string cipherText;
    int key, choice;

    cout << "1 - Cipher" << endl << "2 - Decipher" << endl;
    cin >> choice;
    --choice;

    cin.clear();
    fflush(stdin);

    cout << "Insert the original text:" << endl;
    getline(cin, plainText);

    cout << "Insert the Key Value" << endl;
    cin >> key;

    for(int i = 0; i < plainText.size(); ++i){
        cipherText += caesar(plainText[i], key, choice);
    }
    
    cout << cipherText << endl;

    return 0;
}
