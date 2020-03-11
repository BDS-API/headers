#pragma once

#include "./SyncedAttribute.h"


class SyncedAttribute {

public:

    ~SyncedAttribute();
    SyncedAttribute(SyncedAttribute &&);
    SyncedAttribute();
};
