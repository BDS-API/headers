#pragma once

#include "../mce/UUID.h"
#include "../bedrock/actor/unmapped/ActorUniqueID.h"
#include <string>


class PendingArea {

public:
    ~PendingArea(); // _ZN11PendingAreaD2Ev
    PendingArea(PendingArea &&); // _ZN11PendingAreaC2EOS_
    PendingArea(PendingArea const&); // _ZN11PendingAreaC2ERKS_
    PendingArea(mce::UUID, std::string const&, Bounds const&, bool); // _ZN11PendingAreaC2EN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK6Boundsb
    PendingArea(mce::UUID, ActorUniqueID, Bounds const&); // _ZN11PendingAreaC2EN3mce4UUIDE13ActorUniqueIDRK6Bounds
    PendingArea(mce::UUID, ActorUniqueID, Bounds const&, float); // _ZN11PendingAreaC2EN3mce4UUIDE13ActorUniqueIDRK6Boundsf
    void createTickingArea(mce::UUID, std::string const&, Bounds const&, bool); // _ZN11PendingArea17createTickingAreaEN3mce4UUIDERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK6Boundsb
    void createEntityTickingArea(mce::UUID, ActorUniqueID, Bounds const&, bool, float); // _ZN11PendingArea23createEntityTickingAreaEN3mce4UUIDE13ActorUniqueIDRK6Boundsbf
    void validTag(CompoundTag const&); // _ZN11PendingArea8validTagERK11CompoundTag
    void load(std::string const&, CompoundTag const&); // _ZN11PendingArea4loadERKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEERK11CompoundTag
//  void serialize(AutomaticID<Dimension, int>)const; //TODO: incomplete function definition // _ZNK11PendingArea9serializeE11AutomaticIDI9DimensioniE
};
