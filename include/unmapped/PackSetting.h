#pragma once

#include "./PackSetting.h"
#include <functional>
#include "../json/Value.h"


class PackSetting {

public:

    void get()const;
    void set(Json::Value const&);
//  void registerObserver(void *, std::function<void (Json::Value const&)> const&); //TODO: incomplete function definition
//  void unregisterObserver(void *); //TODO: incomplete function definition
    void _setJsonValue(Json::Value &);
    PackSetting();
    ~PackSetting();
    PackSetting(PackSetting &&);
};
