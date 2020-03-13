#pragma once

#include <string>
#include <functional>


class RoleCheckerCallback {

public:
    RoleCheckerCallback(std::function<void (ADRole, std::string const&, std::string const&)>); // _ZN19RoleCheckerCallbackC2ESt8functionIFv6ADRoleRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES9_EE
    ~RoleCheckerCallback(); // _ZN19RoleCheckerCallbackD2Ev
//  void call(ADRole, std::string const&, std::string const&); //TODO: incomplete function definition // _ZN19RoleCheckerCallback4callE6ADRoleRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEES8_
};
