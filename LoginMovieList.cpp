#include "LoginMovieList.h"
#include "TooneUserData.h"
#include "TooneMovieData.h"
#include "pch.h"
#include "utils.h"

using namespace std;

void LoginMovieList()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while (true)
    {

        ofstream outfile;
        outfile.open("movielist.json");

        cout << "1.添加新电影" << endl;
        cout << "2.移除新电影" << endl;
        cout << "3.退出" << endl;
        cout << "输入：";
        brk:
        int input;
        cin >> input;

        if (input == 1)
        {
            TooneMovieData movie;
            movie.SetID(GenerateGuid());

            string moviename;
            string director;

            cout << "输入新电影名：";
            cin.ignore();
            getline(cin, moviename);
            movie.SetMovieName(moviename);

            cout << "输入新电影导演名：";
            getline(cin, director);
            movie.SetDirector(director);

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
