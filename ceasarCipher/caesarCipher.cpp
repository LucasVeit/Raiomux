#include <iostream>
#include <string>

using namespace std;


int rot_n(int letter, int key, int value, int x){
    int rotted;
    rotted = ((letter - value + key + (24 * x)) % 26 ) + value;
    return rotted;
}

int caesar(int letter, int key, int x){
    if(letter > 64 and letter < 91)
        return rot_n(letter, key, 65, x);
    else if(letter > 96 and letter < 123)
        return rot_n(letter, key, 97, x);
    return letter;
}

int main(){
    string original;
    string cipher;
    int key, x;

    cout << "1 - Cipher" << endl << "2 - Decipher" << endl;
    cin >> x;
    --x;

    cin.clear();
    fflush(stdin);
    
    cout << "Insert the original text:" << endl;
    getline(cin, original);

    cout << "Insert the Key Value" << endl;
    cin >> key;

    for(int i = 0; i < original.size(); ++i){
        cipher += caesar(original[i], key, x);
    }
    
    cout << cipher << endl;

    return 0;
}
