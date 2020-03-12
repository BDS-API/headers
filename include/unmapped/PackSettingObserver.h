#pragma once

#include <functional>


class PackSettingObserver {

public:
    PackSettingObserver(PackSettingObserver &&);
    ~PackSettingObserver();
    PackSettingObserver(void *, std::function<void (Json::Value const&)> const&);
};
