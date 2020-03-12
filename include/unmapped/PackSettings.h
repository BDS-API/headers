#pragma once

#include <string>
#include <functional>
#include "PackIdVersion.h"
#include "../json/Value.h"


class PackSettings {

public:
    void setSetting(std::string const&, Json::Value const&);
    void registerObserver(std::string const&, void *, std::function<void (Json::Value const&)> const&);
    void savePackSettings(PackIdVersion const&);
    void unregisterObserver(void *);
    void getSetting(std::string const&)const;
    void getAllSettings()const;
    void loadPackSettings(PackIdVersion const&, Json::Value const&);
    ~PackSettings();
    void unregisterObserver(std::string const&, void *);
    void _initPackSetting(std::string const&, Json::Value const&);
    PackSettings();
};
