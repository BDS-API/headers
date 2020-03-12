#pragma once

#include <string>
#include <functional>


class RoleCheckerCallback {

public:
//  void call(ADRole, std::string const&, std::string const&); //TODO: incomplete function definition
    RoleCheckerCallback(std::function<void (ADRole, std::string const&, std::string const&)>);
    ~RoleCheckerCallback();
};
