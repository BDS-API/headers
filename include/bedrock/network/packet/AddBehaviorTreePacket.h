#pragma once

#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../io/BinaryStream.h"
#include <string>


class AddBehaviorTreePacket : Packet {

public:
    virtual ~AddBehaviorTreePacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    AddBehaviorTreePacket();
    AddBehaviorTreePacket(std::string const&);
    std::string getJsonInput()const;
};
