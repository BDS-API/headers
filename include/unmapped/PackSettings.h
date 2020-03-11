#pragma once

#include <string>
#include "./PackIdVersion.h"
#include <functional>
#include "../json/Value.h"


class PackSettings {

public:

    void getSetting(std::string const&)const;
    void setSetting(std::string const&, Json::Value const&);
    void loadPackSettings(PackIdVersion const&, Json::Value const&);
    void _initPackSetting(std::string const&, Json::Value const&);
    void savePackSettings(PackIdVersion const&);
//  void registerObserver(std::string const&, void *, std::function<void (Json::Value const&)> const&); //TODO: incomplete function definition
//  void unregisterObserver(std::string const&, void *); //TODO: incomplete function definition
//  void unregisterObserver(void *); //TODO: incomplete function definition
    void getAllSettings()const;
    PackSettings();
    ~PackSettings();
};
