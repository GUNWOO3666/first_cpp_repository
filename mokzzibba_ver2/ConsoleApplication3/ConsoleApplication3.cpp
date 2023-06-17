// ConsoleApplication3.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include "pch.h"
/*
int main()
{
    srand(time(NULL));
    rand();
    
    int nComwin = 0, nPlayerwin = 0;
    int nCom, nPlayer;
    while (nComwin != 2 && nPlayerwin != 2) {
        cout << "1.가위 2.바위 3.보 : ";
        cin >> nPlayer;
        int nCom = rand() % 3 + 1; // 가위 바위 보 1 2 3

        // 가위 바위 보 1 2 3  1<2 2<3 3<1
        if (nCom == 1)
            cout << "(Com) 가위 VS ";
        else if (nCom == 2)
            cout << "(Com) 바위 VS ";
        else
            cout << "(Com) 보 VS ";
        if (nPlayer == 1)
            cout << "가위 (Player)" << endl;
        else if (nPlayer == 2)
            cout << "바위 (Player)" << endl;
        else
            cout << "보 (Player)" << endl;

        if (nCom == nPlayer) 
            cout << "비겼습니다." << endl;
        else if (nCom == 3 && nPlayer == 1) {
            cout << "이겼습니다." << endl;
            nPlayerwin++;
        }
        else if (nCom == 1 && nPlayer == 3) {
            cout << "졌습니다." << endl;
            nCom++;
        }
        else if (nCom < nPlayer) {
            cout << "이겼습니다." << endl;
            nPlayerwin++;
        }
        else {
            cout << "졌습니다." << endl;
            nCom++;
        }
        cout << "=================================" << endl;
        cout << "(Com) " << nComwin << " VS " << nPlayerwin << " (Player)" << endl;
        cout << "=================================" << endl;
    }
    system("pause");

    




}
*/


// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
