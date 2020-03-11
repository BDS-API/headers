#pragma once

#include "../bedrock/actor/Actor.h"
#include <memory>


class PendingRemovalInfo {

public:

    PendingRemovalInfo(std::unique_ptr<Actor, std::default_delete<Actor>>, int);
    ~PendingRemovalInfo();
};
