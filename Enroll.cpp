/*注册*/

#include "pch.h"
#include "Enroll.h"
#include "TooneUserData.h"
#include "TooneUserManager.h"
#include "utils.h"

using namespace std;

extern TooneUserManager s_TooneUserManager;

void Enroll()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    TooneUserData user;
    user.SetID(GenerateGuid());

    string name, pwd;
    cout << "用户名：";
    getline(cin, name);
    user.SetUserName(name);

    cout << "密码：";
    getline(cin, pwd);
    user.SetPassword(pwd);

    string result = s_TooneUserManager.RegisterUser(user);
    if (result == "ok")
    {
        cout << "注册成功！您的 ID 为：" << user.GetID() << "请牢记！！！" << endl;
    }
    else
    {
        cout << result;
    }
}