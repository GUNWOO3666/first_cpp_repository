#include <iostream>
#include "pch.h"

int main()
{
    srand(time(NULL));
    rand();

    int nCom = rand() % 3; // 0=∞°¿ß 1=πŸ¿ß 2=∫∏
    int nPlayer;
    bool bResult, bOnemore = true;
    int nComwin = 0, nPlayerwin = 0;

    while (nComwin != 2 && nPlayerwin != 2) {
        if (nComwin != 2 && nPlayerwin != 2)
            bOnemore = true;
        while (bOnemore) {
            ::cout << "1.∞°¿ß, 2.πŸ¿ß, 3.∫∏: ";
            cin >> nPlayer;
            bOnemore = false;
            if (nCom == 0)
            {
                ::cout << "(Com) ∞°¿ß VS ";
                if (nPlayer == 1) {
                    cout << "∞°¿ß (Player)" << endl << "∫Ò∞ÂΩ¿¥œ¥Ÿ." << endl;
                    bOnemore = true;
                }
                else if (nPlayer == 2) {
                    cout << "πŸ¿ß (Player)" << endl << "¿Ã∞ÂΩ¿¥œ¥Ÿ." << endl;
                    bResult = true;
                }
                else {
                    cout << "∫∏ (Player)" << endl << "¡≥Ω¿¥œ¥Ÿ." << endl;
                    bResult = false;
                }
            }
            else if (nCom == 1)
            {
                cout << "(Com) πŸ¿ß VS ";
                if (nPlayer == 1) {
                    cout << "∞°¿ß (Player)" << endl << "¡≥Ω¿¥œ¥Ÿ." << endl;
                    bResult = false;
                }
                else if (nPlayer == 2) {
                    cout << "πŸ¿ß (Player)" << endl << "∫Ò∞ÂΩ¿¥œ¥Ÿ." << endl;
                    bOnemore = true;
                }
                else {
                    cout << "∫∏ (Player)" << endl << "¿Ã∞ÂΩ¿¥œ¥Ÿ." << endl;
                    bResult = true;
                }
            }
            else
            {
                cout << "(Com) ∫∏ VS ";
                if (nPlayer == 1) {
                    cout << "∞°¿ß (Player)" << endl << "¿Ã∞ÂΩ¿¥œ¥Ÿ." << endl;
                    bResult = true;
                }
                else if (nPlayer == 2) {
                    cout << "πŸ¿ß (Player)" << endl << "¡≥Ω¿¥œ¥Ÿ." << endl;
                    bResult = false;
                }
                else {
                    cout << "∫∏ (Player)" << endl << "∫Ò∞ÂΩ¿¥œ¥Ÿ." << endl;
                    bOnemore = true;
                }
            }
            cout << endl;
        }

        // ∞°¿ßπŸ¿ß∫∏ 123
        // π¨¬Ó∫¸ 213 -> 123      // com 012 -> 123
        if (nPlayer == 1)
            nPlayer += 1;
        else if (nPlayer == 2)
            nPlayer -= 1;
        if (nCom == 0)
            nCom += 2;
        else if (nCom == 2)
            nCom += 1;

        bOnemore = true;
        while (bOnemore) {
            if (bResult == true) { // ∏∏æ‡ ¿Ã∞Â¥Ÿ∏È
                if (nPlayer == 1) {
                    cout << "1.π¨, 2.¬Ó, 3.∫¸: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Player) π¨ π¨... ";
                    if (nPlayer == 1)
                        cout << "π¨!";
                    else if (nPlayer == 2)
                        cout << "¬Ó!";
                    else
                        cout << "∫¸!";
                }
                else if (nPlayer == 2) {
                    cout << "1.π¨, 2.¬Ó, 3.∫¸: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Player) ¬Ó ¬Ó... ";
                    if (nPlayer == 1)
                        cout << "π¨!";
                    else if (nPlayer == 2)
                        cout << "¬Ó!";
                    else
                        cout << "∫¸!";
                }
                else {
                    cout << "1.π¨, 2.¬Ó, 3.∫¸: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Player) ∫¸ ∫¸... ";
                    if (nPlayer == 1)
                        cout << "π¨!";
                    else if (nPlayer == 2)
                        cout << "¬Ó!";
                    else
                        cout << "∫¸!";
                }
                if (nCom == 1)
                    cout << "  (Com) π¨" << endl;
                else if (nCom == 2)
                    cout << "  (Com) ¬Ó" << endl;
                else
                    cout << "  (Com) ∫¸" << endl;
                cout << endl;

                // 1>2 2>3 3>1
                if (nPlayer == nCom) {
                    cout << "¿Ã∞ÂΩ¿¥œ¥Ÿ!" << endl;
                    nPlayerwin++;
                    bOnemore = false;
                }
                else if (nPlayer == 1 && nCom == 2)
                    bResult = true;
                else if (nPlayer == 2 && nCom == 3)
                    bResult = true;
                else if (nPlayer == 3 && nCom == 1)
                    bResult = true;
                else
                    bResult = false;
            }
            else if (bResult == false) { // ∏∏æ‡ ¡≥¥Ÿ∏È
                if (nCom == 1) {
                    cout << "1.π¨, 2.¬Ó, 3.∫¸: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Com) π¨ π¨... ";
                    if (nCom == 1)
                        cout << "π¨!";
                    else if (nCom == 2)
                        cout << "¬Ó!";
                    else
                        cout << "∫¸!";
                }
                else if (nCom == 2) {
                    cout << "1.π¨, 2.¬Ó, 3.∫¸: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Com) ¬Ó ¬Ó... ";
                    if (nCom == 1)
                        cout << "π¨!";
                    else if (nCom == 2)
                        cout << "¬Ó!";
                    else
                        cout << "∫¸!";
                }
                else if (nCom == 2) {
                    cout << "1.π¨, 2.¬Ó, 3.∫¸: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Com) ¬Ó ¬Ó... ";
                    if (nCom == 1)
                        cout << "π¨!";
                    else if (nCom == 2)
                        cout << "¬Ó!";
                    else
                        cout << "∫¸!";
                }
                else {
                    cout << "1.π¨, 2.¬Ó, 3.∫¸: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Com) ∫¸ ∫¸... ";
                    if (nCom == 1)
                        cout << "π¨!";
                    else if (nCom == 2)
                        cout << "¬Ó!";
                    else
                        cout << "∫¸!";
                }
                if (nPlayer == 1)
                    cout << "  (Player) π¨" << endl;
                else if (nPlayer == 2)
                    cout << "  (Player) ¬Ó" << endl;
                else
                    cout << "  (Player) ∫¸" << endl;
                cout << endl;

                if (nPlayer == nCom) {
                    cout << "¡≥Ω¿¥œ¥Ÿ." << endl;
                    nComwin++;
                    bOnemore = false;
                }
                else if (nPlayer == 1 && nCom == 2)
                    bResult = true;
                else if (nPlayer == 2 && nCom == 3)
                    bResult = true;
                else if (nPlayer == 3 && nCom == 1)
                    bResult = true;
                else
                    bResult = false;
            }
        }
        cout << "=================================" << endl;
        cout << "(Com) " << nComwin << " VS " << nPlayerwin << " (Player)" << endl;
        cout << "=================================" << endl;
    }

    system("pause");
}