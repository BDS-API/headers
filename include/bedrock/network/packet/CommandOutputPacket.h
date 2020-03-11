#pragma once

#include "../../io/BinaryStream.h"
#include "../../command/orgin/CommandOrigin.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "./Packet.h"
#include "../../command/CommandOutput.h"
#include <string>


class CommandOutputPacket : Packet {

public:
    virtual ~CommandOutputPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    CommandOutputPacket();
    CommandOutputPacket(CommandOrigin const&, CommandOutput const&);
    void getOriginData()const;
    void getOutput()const;
};
