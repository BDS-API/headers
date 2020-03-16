#pragma once

#include <functional>
#include <string>


class LevelStorageObserver {

public:
    ~LevelStorageObserver(); // _ZN20LevelStorageObserverD2Ev
    LevelStorageObserver(std::function<void (std::string const&)>); // _ZN20LevelStorageObserverC2ESt8functionIFvRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEEE
    void onSave(std::string const&); // _ZN20LevelStorageObserver6onSaveERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
};
