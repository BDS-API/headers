#pragma once

#include <string>


namespace StopwatchHandler {

    void get(std::string const&); // _ZN16StopwatchHandler3getERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void clear(std::string const&); // _ZN16StopwatchHandler5clearERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void clearAll(); // _ZN16StopwatchHandler8clearAllEv
    void print(); // _ZN16StopwatchHandler5printEv
    void printEvery(int); // _ZN16StopwatchHandler10printEveryEi
};
