#pragma once

#include "../json/Value"


class PackSetting {

public:

    void get()const;
    void set(Json::Value const&);
    void registerObserver(void *, std::function<void ()(Json::Value const&)> const&);
    void unregisterObserver(void *);
    void _setJsonValue(Json::Value &);
    PackSetting(void);
    PackSetting(PackSetting&&);
};
