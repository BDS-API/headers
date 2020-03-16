#pragma once

#include <string>
#include <vector>
#include "CommandRegistry.h"


class CommandParameterData {

public:
    ~CommandParameterData(); // _ZN20CommandParameterDataD2Ev
//    CommandParameterData(long, bool (long *), long *, CommandRegistry::ParseToken const&, CommandOrigin const&, int, std::string &, std::vector<std::string> &); //TODO: incomplete function definition // _ZN20CommandParameterDataC2E8typeid_tI15CommandRegistryEMS1_KFbPvRKNS1_10ParseTokenERK13CommandOriginiRNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERSt6vectorISF_SaISF_EEEPKc24CommandParameterDataTypeSO_ibi
    CommandParameterData(CommandParameterData const&); // _ZN20CommandParameterDataC2ERKS_
//    void addOptions(long); //TODO: incomplete function definition // _ZN20CommandParameterData10addOptionsE22CommandParameterOption
//    bool hasOption(long)const; //TODO: incomplete function definition // _ZNK20CommandParameterData9hasOptionE22CommandParameterOption
};
