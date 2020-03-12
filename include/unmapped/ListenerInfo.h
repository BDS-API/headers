#pragma once

#include "../bedrock/util/Vec3.h"
#include <functional>


class ListenerInfo {

public:
    ListenerInfo(Vec3, float, std::function<void (Block const&)>);
    ~ListenerInfo();
};
