#include<bits/stdc++.h>
#include <conio.h>
#include <windows.h>
#pragma GCC optimize("Ofast")
using namespace std;
int main()
{
    cout << "loading....." << endl;
    Sleep(1200);
    cout << "~Empty & Divide~" << endl;
    Sleep(700);
    cout << "Created by GD Corona" << endl;
    Sleep(700);
    cout << "_______________________" << endl;
    Sleep(1500);
    cout << "Welcome to the Empty & Divide Game! ;)" << "\n";
    cout << "please wait..." << "\n";
    cout << endl;
    cout << endl;
    Sleep(2000);
    int box1, box2;
    while(1)
    {
        cout << "Choose value of box1 and box2: ";
        cin >> box1 >> box2;
        if((box1 == 1 && box2 == 1) || box1 <= 0 || box2 <= 0)
        {
            cout << "Invalid choice, please try again!" << "\n";
            continue;
        }
        else break;
    }
    cout << "Starting Game...." << "\n";
    cout << endl;
    cout << endl;
    Sleep(2500);
    cout << "box1: " << box1 << "\n";
    cout << "box2: " << box2 << "\n";
    while(box1 != 1 || box2 != 1)
    {
        string you, com;
        int div1, div2;
        cout << "Your turn: ";
        cin >> you >> div1 >> div2;
        if(you != "box1" && you != "box2")
        {
            cout << "Invalid choice, please try again!" << "\n";
            continue;
        }
        if(you == "box1")
        {
            if(box2 == 1 || div1 <= 0 || div2 <= 0 || div1 + div2 != box2)
            {
                cout << "Invalid choice, please try again!" << "\n";
                continue;
            }
        }
        else if(you == "box2")
        {
            if(box1 == 1 || div1 <= 0 || div2 <= 0 || div1 + div2 != box1)
            {
                cout << "Invalid choice, please try again!" << "\n";
                continue;
            }
        }
        box1 = div1;
        box2 = div2;
        cout << "box1: " << box1 << "\n";
        cout << "box2: " << box2 << "\n";
        if(box1 == 1 && box2 == 1)
        {
            cout << "You win :)";
            break;
        }
        cout << "Computer's turn: ";
        int temp;
        if(box1 % 2 != 0 && box2 % 2 != 0) //losing state
        {
            if(box1 <= box2) //prolong playtime
            {
                com = "box1";
                temp = box2;
            }
            else
            {
                com = "box2";
                temp = box1;
            }
            div1 = 1;
            div2 = temp - 1;
        }
        else //winning state
        {
            if(box1 % 2 == 0 && box2 % 2 == 0)
            {
                if(box1 >= box2)
                {
                    com = "box1";
                    temp = box2;
                }
                else
                {
                    com = "box2";
                    temp = box1;
                }
            }
            else if(box1 % 2 == 0 && box2 % 2 != 0)
            {
                com = "box2";
                temp = box1;
            }
            else if(box1 % 2 != 0 && box2 % 2 == 0)
            {
                com = "box1";
                temp = box2;
            }
            div1 = temp / 2;
            div2 = temp / 2;
            if(div1 % 2 == 0 && div2 % 2 == 0)
            {
                div1--;
                div2++;
            }
        }
        Sleep(1500);
        cout << com << " " << div1 << " " << div2 << "\n";
        box1 = div1;
        box2 = div2;
        Sleep(500);
        cout << "box1: " << box1 << "\n";
        cout << "box2: " << box2 << "\n";
        if(box1 == 1 && box2 == 1)
        {
            cout << "Computer win :(";
            break;
        }
    }
    _getch();
    return 0;
}
/*
Rule: 
B1: Nh???p s??? vi??n ???? ??? 2 h???p
B2: Ch???n 1 trong 2 h???p ????? l??m r???ng b???ng c??ch nh???p "box1" ho???c "box2", 
s??? ???? trong h???p ???????c ch???n s??? b??? b??? h???t. Sau ???? l???n l?????t nh???p s??? vi??n ???? 
b???n mu???n chia ra cho 2 h???p, v?? d??? v???i box1 = 6, box2 = 6, n???u nh???p
box1 2 4 th?? ngh??a l?? b???n l??m r???ng h???p 1, 6 vi??n h???p 2 s??? ???????c l???y ra v?? chia
th??nh 2 vi??n ??? h???p 1 v?? 4 vi??n ??? h???p 2.

Sau khi nh???p xong s??? ?????n l?????t m??y ch???n v?? khi t???i l?????t b???n c??? l???p l???i 2 b?????c tr??n.
N???u khi b???n k???t th??c l?????t m?? m???i h???p c??n ????ng 1 vi??n th?? b???n th???ng, ng?????c l???i th?? thua.
Good luck ^^
*/

