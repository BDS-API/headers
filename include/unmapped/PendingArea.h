#pragma once

#include "../mce/UUID.h"
#include "./Bounds.h"
#include "./Dimension.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "./PendingArea.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include <string>


class PendingArea {

public:

    ~PendingArea();
    PendingArea(PendingArea &&);
    PendingArea(PendingArea const&);
    PendingArea(mce::UUID, std::string const&, Bounds const&, bool);
    PendingArea(mce::UUID, ActorUniqueID, Bounds const&);
    PendingArea(mce::UUID, ActorUniqueID, Bounds const&, float);
    void createTickingArea(mce::UUID, std::string const&, Bounds const&, bool);
    void createEntityTickingArea(mce::UUID, ActorUniqueID, Bounds const&, bool, float);
    void validTag(CompoundTag const&);
    void load(std::string const&, CompoundTag const&);
//  void serialize(AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
};
