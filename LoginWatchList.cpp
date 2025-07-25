#include "LoginWatchList.h"
#include "pch.h"
#include "TooneMovieData.h"
#include "utils.h"

using namespace std;

void LoginWatchList()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (true)
    {

        ofstream outfile;
        outfile.open("watchmovielist.json");

        cout << "1.关注新电影" << endl;
        cout << "2.移除关注电影" << endl;
        cout << "3.退出" << endl;
        cout << "输入：";
        brk:
        int input;
        cin >> input;

        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (input == 1)
        {
            TooneMovieData watchmovie;
            watchmovie.SetID(GenerateGuid());
            string watchmoviename;
            string director;

            cout << "输入新电影名：";
            getline(cin, watchmoviename);
            watchmovie.SetMovieName(watchmoviename);

            cout << "输入新电影导演名：";
            getline(cin, director);
            watchmovie.SetDirector(director);

        }
        else if (input == 2)
        {

        }
        else if (input == 3)
        {
            cout << "已退出" << endl;
            break;
        }
        else
        {
            cerr << "输入错误，请重新输入：";
            goto brk;
        }
        break;
    }
}
