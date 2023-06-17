#include <iostream>
#include "pch.h"

int main()
{
    srand(time(NULL));
    rand();

    int nCom = rand() % 3; // 0=���� 1=���� 2=��
    int nPlayer;
    bool bResult, bOnemore = true;
    int nComwin = 0, nPlayerwin = 0;

    while (nComwin != 2 && nPlayerwin != 2) {
        if (nComwin != 2 && nPlayerwin != 2)
            bOnemore = true;
        while (bOnemore) {
            ::cout << "1.����, 2.����, 3.��: ";
            cin >> nPlayer;
            bOnemore = false;
            if (nCom == 0)
            {
                ::cout << "(Com) ���� VS ";
                if (nPlayer == 1) {
                    cout << "���� (Player)" << endl << "�����ϴ�." << endl;
                    bOnemore = true;
                }
                else if (nPlayer == 2) {
                    cout << "���� (Player)" << endl << "�̰���ϴ�." << endl;
                    bResult = true;
                }
                else {
                    cout << "�� (Player)" << endl << "�����ϴ�." << endl;
                    bResult = false;
                }
            }
            else if (nCom == 1)
            {
                cout << "(Com) ���� VS ";
                if (nPlayer == 1) {
                    cout << "���� (Player)" << endl << "�����ϴ�." << endl;
                    bResult = false;
                }
                else if (nPlayer == 2) {
                    cout << "���� (Player)" << endl << "�����ϴ�." << endl;
                    bOnemore = true;
                }
                else {
                    cout << "�� (Player)" << endl << "�̰���ϴ�." << endl;
                    bResult = true;
                }
            }
            else
            {
                cout << "(Com) �� VS ";
                if (nPlayer == 1) {
                    cout << "���� (Player)" << endl << "�̰���ϴ�." << endl;
                    bResult = true;
                }
                else if (nPlayer == 2) {
                    cout << "���� (Player)" << endl << "�����ϴ�." << endl;
                    bResult = false;
                }
                else {
                    cout << "�� (Player)" << endl << "�����ϴ�." << endl;
                    bOnemore = true;
                }
            }
            cout << endl;
        }

        // ���������� 123
        // ����� 213 -> 123      // com 012 -> 123
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
            if (bResult == true) { // ���� �̰�ٸ�
                if (nPlayer == 1) {
                    cout << "1.��, 2.��, 3.��: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Player) �� ��... ";
                    if (nPlayer == 1)
                        cout << "��!";
                    else if (nPlayer == 2)
                        cout << "��!";
                    else
                        cout << "��!";
                }
                else if (nPlayer == 2) {
                    cout << "1.��, 2.��, 3.��: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Player) �� ��... ";
                    if (nPlayer == 1)
                        cout << "��!";
                    else if (nPlayer == 2)
                        cout << "��!";
                    else
                        cout << "��!";
                }
                else {
                    cout << "1.��, 2.��, 3.��: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Player) �� ��... ";
                    if (nPlayer == 1)
                        cout << "��!";
                    else if (nPlayer == 2)
                        cout << "��!";
                    else
                        cout << "��!";
                }
                if (nCom == 1)
                    cout << "  (Com) ��" << endl;
                else if (nCom == 2)
                    cout << "  (Com) ��" << endl;
                else
                    cout << "  (Com) ��" << endl;
                cout << endl;

                // 1>2 2>3 3>1
                if (nPlayer == nCom) {
                    cout << "�̰���ϴ�!" << endl;
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
            else if (bResult == false) { // ���� ���ٸ�
                if (nCom == 1) {
                    cout << "1.��, 2.��, 3.��: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Com) �� ��... ";
                    if (nCom == 1)
                        cout << "��!";
                    else if (nCom == 2)
                        cout << "��!";
                    else
                        cout << "��!";
                }
                else if (nCom == 2) {
                    cout << "1.��, 2.��, 3.��: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Com) �� ��... ";
                    if (nCom == 1)
                        cout << "��!";
                    else if (nCom == 2)
                        cout << "��!";
                    else
                        cout << "��!";
                }
                else if (nCom == 2) {
                    cout << "1.��, 2.��, 3.��: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Com) �� ��... ";
                    if (nCom == 1)
                        cout << "��!";
                    else if (nCom == 2)
                        cout << "��!";
                    else
                        cout << "��!";
                }
                else {
                    cout << "1.��, 2.��, 3.��: ";
                    cin >> nPlayer;
                    cout << endl;
                    nCom = (rand() % 3) + 1;
                    cout << "(Com) �� ��... ";
                    if (nCom == 1)
                        cout << "��!";
                    else if (nCom == 2)
                        cout << "��!";
                    else
                        cout << "��!";
                }
                if (nPlayer == 1)
                    cout << "  (Player) ��" << endl;
                else if (nPlayer == 2)
                    cout << "  (Player) ��" << endl;
                else
                    cout << "  (Player) ��" << endl;
                cout << endl;

                if (nPlayer == nCom) {
                    cout << "�����ϴ�." << endl;
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