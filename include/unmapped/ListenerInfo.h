#pragma once

#include <functional>
#include "../bedrock/util/Vec3.h"


class ListenerInfo {

public:
    ~ListenerInfo(); // _ZN12ListenerInfoD2Ev
    ListenerInfo(Vec3, float, std::function<void (Block const&)>); // _ZN12ListenerInfoC2E4Vec3fSt8functionIFvRK5BlockEE
};
