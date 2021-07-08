#include <iostream>
#include <string>

using namespace std;


int vigenere(int letter, int key, int value){
    char vigenered;
    vigenered = (((key - value) + (letter - value)) % 26) + value;
    return vigenered;
}

int main(){
    string plainText;
    string key;
    string cipherText;
    int choice;
    char pos;
    
    cout << "Insert the original text:" << endl;
    getline(cin, plainText);

    cout << "Insert the Key text" << endl;
    cin >> key;

    for(int i = 0, j = 0; i < plainText.size(); ++i){

        if(plainText[i] > 64 && plainText[i] < 91){
            cipherText += vigenere(plainText[i], key[j], 65);
            j = (j + 1) % key.size();
        }else if(plainText[i] > 96 && plainText[i] < 123){
            cipherText += vigenere(plainText[i], key[j], 97);
            j = (j + 1) % key.size();
        }else
            cipherText += plainText[i];
    }

    cout << cipherText << endl;

    return 0;
}