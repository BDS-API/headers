#pragma once

#include <functional>


class PackSetting {

public:
    void get()const; // _ZNK11PackSetting3getEv
    void set(Json::Value const&); // _ZN11PackSetting3setERKN4Json5ValueE
    void registerObserver(void *, std::function<void (Json::Value const&)> const&); // _ZN11PackSetting16registerObserverEPvRKSt8functionIFvRKN4Json5ValueEEE
    void unregisterObserver(void *); // _ZN11PackSetting18unregisterObserverEPv
    void _setJsonValue(Json::Value &); // _ZN11PackSetting13_setJsonValueERN4Json5ValueE
    PackSetting(); // _ZN11PackSettingC2Ev
    ~PackSetting(); // _ZN11PackSettingD2Ev
    PackSetting(PackSetting &&); // _ZN11PackSettingC2EOS_
};
