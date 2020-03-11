#pragma once

#include <functional>
#include "./PackSettingObserver.h"
#include "../json/Value.h"


class PackSettingObserver {

public:

//  PackSettingObserver(void *, std::function<void (Json::Value const&)> const&); //TODO: incomplete function definition
    ~PackSettingObserver();
    PackSettingObserver(PackSettingObserver &&);
};
