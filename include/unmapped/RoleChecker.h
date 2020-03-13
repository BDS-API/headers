#pragma once

#include <string>
#include <functional>


class RoleChecker {

public:
    RoleChecker(); // _ZN11RoleCheckerC2Ev
    ~RoleChecker(); // _ZN11RoleCheckerD2Ev
    void lookupInProgress()const; // _ZNK11RoleChecker16lookupInProgressEv
    void checkRole(std::string const&, std::function<void (ADRole, std::string const&, std::string const&)>); // _ZN11RoleChecker9checkRoleERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt8functionIFv6ADRoleS7_S7_EE
};
