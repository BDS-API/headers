#pragma once

class PackSettingObserver {

public:

    void PackSettingObserver(void *, std::function<void ()(Json::Value const&)> const&);
    void PackSettingObserver(PackSettingObserver&&);
};
