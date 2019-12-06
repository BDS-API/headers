#pragma once

class PackSetting {

public:

    void get(void)const;
    void set(Json::Value const&);
    void registerObserver(void *, std::function<void ()(Json::Value const&)> const&);
    void unregisterObserver(void *);
    void _setJsonValue(Json::Value &);
    void PackSetting(void);
    void PackSetting(PackSetting&&);
};