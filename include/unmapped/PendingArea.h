#pragma once

#include <string>
#include "Bounds.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "Dimension.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../mce/UUID.h"


class PendingArea {

public:
    void load(std::string const&, CompoundTag const&);
    void createEntityTickingArea(mce::UUID, ActorUniqueID, Bounds const&, bool, float);
//  void serialize(AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    PendingArea(mce::UUID, ActorUniqueID, Bounds const&);
    PendingArea(PendingArea const&);
    ~PendingArea();
    void validTag(CompoundTag const&);
    PendingArea(PendingArea &&);
    PendingArea(mce::UUID, std::string const&, Bounds const&, bool);
    PendingArea(mce::UUID, ActorUniqueID, Bounds const&, float);
    void createTickingArea(mce::UUID, std::string const&, Bounds const&, bool);
};
