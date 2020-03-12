#pragma once

#include <functional>
#include "../json/Value.h"


class PackSetting {

public:
    void get()const;
    void registerObserver(void *, std::function<void (Json::Value const&)> const&);
    ~PackSetting();
    PackSetting(PackSetting &&);
    void set(Json::Value const&);
    void unregisterObserver(void *);
    PackSetting();
    void _setJsonValue(Json::Value &);
};
