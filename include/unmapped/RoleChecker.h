#pragma once

#include <string>
#include <functional>


class RoleChecker {

public:
    ~RoleChecker();
    RoleChecker();
    void lookupInProgress()const;
    void checkRole(std::string const&, std::function<void (ADRole, std::string const&, std::string const&)>);
};
