
#ifndef TOONEUSERMANAGER_H
#define TOONEUSERMANAGER_H
#include "TooneUserData.h"


class TooneUserManager
{
public:
    TooneUserManager();
    ~TooneUserManager();

    void LoadUserData();

    void SaveUserData();

    std::string RegisterUser(TooneUserData const& userData);

    std::string LoginUser(TooneUserData const &userData);

protected:
    std::string CheckUserData(TooneUserData const &userData);

private:
    std::list<TooneUserData> m_AllUser;
};


#endif //TOONEUSERMANAGER_H
