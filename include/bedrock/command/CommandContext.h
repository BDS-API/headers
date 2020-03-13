#pragma once

#include <string>
#include <memory>


class CommandContext {

public:
    ~CommandContext(); // _ZN14CommandContextD2Ev
    std::string getCommand()const; // _ZNK14CommandContext10getCommandB5cxx11Ev
    CommandContext(std::string const&, std::unique_ptr<CommandOrigin>, int); // _ZN14CommandContextC2ERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10unique_ptrI13CommandOriginSt14default_deleteIS9_EEi
    void getCommandOrigin()const; // _ZNK14CommandContext16getCommandOriginEv
    void getVersion()const; // _ZNK14CommandContext10getVersionEv
};
