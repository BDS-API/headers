#pragma once



class PackSettingObserver {

public:

    PackSettingObserver(void *, std::function<void ()(Json::Value const&)> const&);
    PackSettingObserver(PackSettingObserver&&);
};
