#include <iostream>
#include <string>

using namespace std;

int main(){
    string original;
    string cipher;
    int key;
    cout << "Insert the original text:" << endl;
    cin >> original;
    cout << "Insert the Key Value" << endl;
    cin >> key;

    for(int i = 0; i < original.size(); ++i){
        cipher += original[i] + key;
        if(cipher[i] > 'z')
            cipher[i] = cipher[i] - 26;
    }
    
    cout << cipher << endl;
}
