#pragma once

#include "../json/Value"


class PackSettings {

public:

    void getSetting(std::string const&)const;
    void setSetting(std::string const&, Json::Value const&);
    void loadPackSettings(PackIdVersion const&, Json::Value const&);
    void _initPackSetting(std::string const&, Json::Value const&);
    void savePackSettings(PackIdVersion const&);
    void registerObserver(std::string const&, void *, std::function<void ()(Json::Value const&)> const&);
    void unregisterObserver(std::string const&, void *);
    void unregisterObserver(void *);
    void getAllSettings()const;
    PackSettings(void);
};
