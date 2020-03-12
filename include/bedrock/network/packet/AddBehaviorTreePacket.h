#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "Packet.h"
#include <string>


class AddBehaviorTreePacket : Packet {

public:
    ~AddBehaviorTreePacket();
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    AddBehaviorTreePacket();
    AddBehaviorTreePacket(std::string const&);
    std::string getJsonInput()const;
};
