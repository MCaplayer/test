#include "pch.h"
#include "WelcomeText.h"
#include "Enroll.h"
#include "Login.h"
#include "Logout.h"
#include "Information.h"
#include "UserText.h"
#include "TooneUserManager.h"
#include "LoginMovieList.h"
#include "LoginWatchList.h"

using namespace std;


extern TooneUserManager s_TooneUserManager;

void LoadUserData()
{
    s_TooneUserManager.LoadUserData();
}

int main()
{
#ifdef _WIN32
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);
#endif

    LoadUserData();
    cout << "---------------------关注电影--------------------------\n";
    cout << "         本程序可以为自己喜欢的电影标记关注。\n";


    while (true)
        {
        string input;
        WelcomeText();
        exit:
        cout << "输入：";
        cin >> input;

        if (input == "1")
        {
            /*注册*/
            Enroll();
        }

        else if (input == "2")
        {
            /*登录*/
            int a1 = Login(); // 只调用一次

            if (a1 == 1)
            {
                while (true)
                {
                    UserText();

                    int uinput;
                    cin >> uinput;
                    if (uinput == 1)
                    {

                    }
                    else if (uinput == 2)
                    {

                    }
                    else if (uinput == 3)
                    {
                        LoginWatchList();
                    }
                    else if (uinput == 4)
                    {
                        LoginMovieList();
                    }
                    else if (uinput == 5)
                    {
                        /*退出*/
                        cout << "已退出" << endl;
                        break;
                    }
                    else
                    {
                        cerr << "输入错误，请重新输入" << endl;
                        goto exit;
                    }
                }
            }

        }
        else if (input == "3")
        {
            /*注销*/
            Logout();
        }
        else if (input == "4")
        {
            /*关于*/
            Information();
            brk:
            int input1;
            cin >> input1;
            if (input1 == 4)
            {
              goto exit;
            }
            goto brk;
        }
        else if (input == "5")
        {
            /*退出*/
            cout << "数据已备份，下次再来!" << "\n";
            break;
        }
        else
        {
            /*错误*/
            cout << "输入错误，请重新";
            goto exit;
        }
    }
}
