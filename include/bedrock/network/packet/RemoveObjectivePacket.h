#pragma once

#include "../../../unmapped/Objective"
#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"


class RemoveObjectivePacket : Packet {

public:
    virtual RemoveObjectivePacket::~RemoveObjectivePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    RemoveObjectivePacket(void);
    RemoveObjectivePacket(Objective const&);
};
