#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../mce/UUID"
#include "../bedrock/actor/unmapped/ActorUniqueID"


class PendingArea {

public:

    PendingArea(PendingArea&&);
    PendingArea(PendingArea const&);
    PendingArea(mce::UUID, std::string const&, Bounds const&, bool);
    PendingArea(mce::UUID, ActorUniqueID, Bounds const&);
    PendingArea(mce::UUID, ActorUniqueID, Bounds const&, float);
    void createTickingArea(mce::UUID, std::string const&, Bounds const&, bool);
    void createEntityTickingArea(mce::UUID, ActorUniqueID, Bounds const&, bool, float);
    void validTag(CompoundTag const&);
    void load(std::string const&, CompoundTag const&);
    void serialize(AutomaticID<Dimension, int>)const;
};
