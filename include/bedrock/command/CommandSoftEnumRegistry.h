#pragma once

#include <string>
#include <vector>


class CommandSoftEnumRegistry {

public:
    CommandSoftEnumRegistry(CommandRegistry *); // _ZN23CommandSoftEnumRegistryC2EP15CommandRegistry
    CommandSoftEnumRegistry(); // _ZN23CommandSoftEnumRegistryC2Ev
    ~CommandSoftEnumRegistry(); // _ZN23CommandSoftEnumRegistryD2Ev
//  void updateSoftEnum(SoftEnumUpdateType, std::string const&, std::vector<std::string>); //TODO: incomplete function definition // _ZN23CommandSoftEnumRegistry14updateSoftEnumE18SoftEnumUpdateTypeRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt6vectorIS6_SaIS6_EE
    bool isValid()const; // _ZNK23CommandSoftEnumRegistry7isValidEv
};
