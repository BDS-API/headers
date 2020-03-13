#pragma once

#include <string>
#include <functional>


class PackSettings {

public:
    void getSetting(std::string const&)const; // _ZNK12PackSettings10getSettingERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEE
    void setSetting(std::string const&, Json::Value const&); // _ZN12PackSettings10setSettingERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
    void loadPackSettings(PackIdVersion const&, Json::Value const&); // _ZN12PackSettings16loadPackSettingsERK13PackIdVersionRKN4Json5ValueE
    void _initPackSetting(std::string const&, Json::Value const&); // _ZN12PackSettings16_initPackSettingERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERKN4Json5ValueE
    void savePackSettings(PackIdVersion const&); // _ZN12PackSettings16savePackSettingsERK13PackIdVersion
    void registerObserver(std::string const&, void *, std::function<void (Json::Value const&)> const&); // _ZN12PackSettings16registerObserverERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPvRKSt8functionIFvRKN4Json5ValueEEE
    void unregisterObserver(std::string const&, void *); // _ZN12PackSettings18unregisterObserverERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEEPv
    void unregisterObserver(void *); // _ZN12PackSettings18unregisterObserverEPv
    void getAllSettings()const; // _ZNK12PackSettings14getAllSettingsEv
    PackSettings(); // _ZN12PackSettingsC2Ev
    ~PackSettings(); // _ZN12PackSettingsD2Ev
};
