#pragma once

#include <string>
#include "Packet.h"


class AddBehaviorTreePacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    virtual std::string getName()const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    ~AddBehaviorTreePacket();
    AddBehaviorTreePacket(std::string const&);
    AddBehaviorTreePacket();
    std::string getJsonInput()const;
};
