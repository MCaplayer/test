/*登录*/

#include "pch.h"
#include "Login.h"
#include "TooneUserManager.h"

using namespace std;


extern TooneUserManager s_TooneUserManager;

int Login()
{

    TooneUserData user;

    string name, pwd;
    cout << "用户名：";
    cin >> name;
    cout << "密码：";
    cin >> pwd;

    user.SetUserName(name);
    user.SetPassword(pwd);

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // 清理残留换行

    string result = s_TooneUserManager.LoginUser(user);

    if (result == "ok")
    {
        cout << "登录成功！" << endl;
        return 1;
    }    else

    {
        cerr << "登录失败！" << endl;
        return 2;
    }

}