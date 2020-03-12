#pragma once

#include <string>
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include "../mce/UUID.h"


class PendingArea {

public:
    PendingArea(mce::UUID, ActorUniqueID, Bounds const&, float);
    PendingArea(mce::UUID, ActorUniqueID, Bounds const&);
    void createEntityTickingArea(mce::UUID, ActorUniqueID, Bounds const&, bool, float);
    ~PendingArea();
    PendingArea(PendingArea &&);
    void createTickingArea(mce::UUID, std::string const&, Bounds const&, bool);
    PendingArea(mce::UUID, std::string const&, Bounds const&, bool);
    void load(std::string const&, CompoundTag const&);
    void validTag(CompoundTag const&);
//  void serialize(AutomaticID<Dimension, int>)const; //TODO: incomplete function definition
    PendingArea(PendingArea const&);
};
