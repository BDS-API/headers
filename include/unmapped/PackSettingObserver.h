#pragma once

#include <functional>
#include "../json/Value.h"


class PackSettingObserver {

public:
    PackSettingObserver(void *, std::function<void (Json::Value const&)> const&);
    ~PackSettingObserver();
    PackSettingObserver(PackSettingObserver &&);
};
