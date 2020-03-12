#pragma once

#include <functional>
#include "Block.h"
#include "../bedrock/util/Vec3.h"


class ListenerInfo {

public:
    ListenerInfo(Vec3, float, std::function<void (Block const&)>);
    ~ListenerInfo();
};
