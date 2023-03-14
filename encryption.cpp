//prm:
/*
Title  : Cesar encryption using pi number
Author : @ABRA
Github : https://github.com/the-abra
Discord: Abra#1568 - https://discord.gg/R6fVaQS5We
*/

#include  <iostream>
#include <iomanip>

using namespace std;

//translate text to number
int translate(char a) {
    switch (a)
    {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    }
}

int main(){
    //vars block
        char pi[135] = "14159265358979328462643383279502"
                       "884197169399375105820974944592307"
                       "816406286208998628034825342117067"
                       "98214808651328230664709384460955058";
        char value[135];
        int choose;
    
    //input block
        cout << "Type the word: ";
        cin.getline(value, 135);
        a: //check point
        cout << "Set 1 for encryption\n    2 for decryption\n└──╼>>> ";
        cin >> choose;
    
    //output && cryption block
    if ( choose == 1 ) {
        //encryption
        for (int i = 0; value[i] != '\0'; i++){
            value[i] = value[i] + translate(pi[i]);
        }
        cout << "Crypted value: " << value << endl;
    }
    else if ( choose == 2 ) {
        //decryption
        for (int i = 0; value[i] != '\0'; i++){
            value[i] = value[i] - translate(pi[i]);
        }
        cout << "Decrypted value: " << value << endl;
    }
    else {
        cout << "invalid choice! try again...\n----------------------------" << endl;
        goto a; //return to check point
    }
}