#pragma once

class RoleChecker {

public:

    void RoleChecker(void);
    void lookupInProgress(void)const;
    void checkRole(std::string const&, std::function<void ()(ADRole, std::string const&, std::string const&)>);
};
