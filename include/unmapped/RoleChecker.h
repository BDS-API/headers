#pragma once

#include <functional>
#include <string>


class RoleChecker {

public:
    void lookupInProgress()const;
//  void checkRole(std::string const&, std::function<void (ADRole, std::string const&, std::string const&)>); //TODO: incomplete function definition
    ~RoleChecker();
    RoleChecker();
};
