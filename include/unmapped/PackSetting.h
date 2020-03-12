#pragma once

#include <functional>


class PackSetting {

public:
    PackSetting(PackSetting &&);
    void unregisterObserver(void *);
    void registerObserver(void *, std::function<void (Json::Value const&)> const&);
    void get()const;
    PackSetting();
    void _setJsonValue(Json::Value &);
    ~PackSetting();
    void set(Json::Value const&);
};
