#ifndef TONNEUSERDATA_H
#define TONNEUSERDATA_H

#include <string>

class TooneUserData {
public:
    TooneUserData();
    ~TooneUserData();

    void SetUserName(std::string username);
    std::string GetUserName() const;

    void SetPassword(std::string password);
    std::string GetPassword() const;

    void SetID(std::string id);
    std::string GetID() const;


private:
    std::string m_UserName;
    std::string m_Password;
    std::string m_id;
};

#endif // TONNEUSERDATA_H