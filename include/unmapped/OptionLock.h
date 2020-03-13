#pragma once

#include <functional>


class OptionLock {

public:
    ~OptionLock(); // _ZN10OptionLockD2Ev
    OptionLock(void *, std::function<bool (void)>); // _ZN10OptionLockC2EPvSt8functionIFbvEE
};
