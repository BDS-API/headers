#pragma once

#include <functional>


class PackSettingObserver {

public:
    PackSettingObserver(void *, std::function<void (Json::Value const&)> const&); // _ZN19PackSettingObserverC2EPvRKSt8functionIFvRKN4Json5ValueEEE
    ~PackSettingObserver(); // _ZN19PackSettingObserverD2Ev
    PackSettingObserver(PackSettingObserver &&); // _ZN19PackSettingObserverC2EOS_
};
