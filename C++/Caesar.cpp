#include <iostream>
#include <string>

using namespace std;


int rot(int letter, int key, int value){
    int rotted;
    rotted = ((letter - value + key) % 26 ) + value; // descriptografar -> 26 - quantidade que vai
    return rotted;
}

int caesar(int letter, int key){
    if(letter > 64 && letter < 91)
        return rot(letter, key, 65);
    else if(letter > 96 && letter < 123)
        return rot(letter, key, 97);
    return letter;
}

int main(){
    string plainText;
    string cipherText;
    int key, choice;

    cout << "1 - Cipher" << endl << "2 - Decipher" << endl;
    cin >> choice;
    --choice;

    getchar();

    cout << "Insert the original text:" << endl;
    getline(cin, plainText);

    cout << "Insert the Key Value" << endl;
    cin >> key;

    for(int i = 0; i < plainText.size(); ++i){
        cipherText += caesar(plainText[i], key);
    }
    
    cout << cipherText << endl;

    return 0;
}
