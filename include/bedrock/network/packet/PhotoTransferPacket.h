#pragma once

#include <string>
#include "Packet.h"
#include "../../../core/Path.h"


class PhotoTransferPacket : Packet {

public:
    virtual std::string getName()const;
    ~PhotoTransferPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual void getId()const;
    virtual void write(BinaryStream &)const;
    void fromDisk(Core::Path, PhotoTransferPacket &);
    PhotoTransferPacket(std::string const&, std::string &);
    PhotoTransferPacket();
    PhotoTransferPacket(std::string const&);
};
