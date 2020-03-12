#pragma once

#include "../bedrock/actor/Actor.h"
#include <memory>


class PendingRemovalInfo {

public:
    ~PendingRemovalInfo();
    PendingRemovalInfo(std::unique_ptr<Actor>, int);
};
