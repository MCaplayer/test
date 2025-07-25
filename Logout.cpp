/*注销*/

#include "pch.h"
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

struct UserEntry {
    string name;
    string pwd;
    string uuid;
};

void Logout()
{
    cout << "*****注销验证系统*****\n";

    string name, pwd, uuid;
    cout << "用户名：";
    cin >> name;
    cout << "密码：";
    cin >> pwd;
    cout << "UUID：";
    cin >> uuid;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  // 清理残留换行

    vector<UserEntry> users;
    string line;

    ifstream infile("userdata.json");
    if (!infile) {
        cerr << "无法打开用户数据文件。\n\n";
        return;
    }

    while (getline(infile, line)) {
        stringstream ss(line);
        string n, p, u;
        getline(ss, n, ',');
        getline(ss, p, ',');
        getline(ss, u, ',');
        users.push_back({n, p, u});
    }
    infile.close();

    bool found = false;
    for (auto it = users.begin(); it != users.end(); ++it) {
        if (it->name == name && it->pwd == pwd && it->uuid == uuid) {
            users.erase(it);
            found = true;
            break;
        }
    }

    if (!found) {
        cerr << "用户名、密码或 UUID 不匹配，注销失败！\n\n";
        return;
    }

    ofstream outfile("userdata.json", ios::trunc);
    if (!outfile) {
        cerr << "无法写回用户数据文件。\n\n";
        return;
    }

    for (const auto& e : users) {
        outfile << e.name << ',' << e.pwd << ',' << e.uuid << '\n';
    }

    cout << "注销成功！您的数据已被永久删除。\n\n";
}