#pragma once

#include <string>
#include <functional>


class PackSettings {

public:
    void getSetting(std::string const&)const;
    void loadPackSettings(PackIdVersion const&, Json::Value const&);
    void unregisterObserver(std::string const&, void *);
    void registerObserver(std::string const&, void *, std::function<void (Json::Value const&)> const&);
    void unregisterObserver(void *);
    PackSettings();
    ~PackSettings();
    void getAllSettings()const;
    void _initPackSetting(std::string const&, Json::Value const&);
    void setSetting(std::string const&, Json::Value const&);
    void savePackSettings(PackIdVersion const&);
};
