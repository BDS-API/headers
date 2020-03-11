#pragma once

#include "./EntityId.h"


class EntityId {

public:

    EntityId(unsigned long);
    void operator==(EntityId const&)const;
    void operator!=(EntityId const&)const;
};
