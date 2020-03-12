#pragma once

#include "../../io/BinaryStream.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include <string>
#include "../../../core/Path.h"
#include "Packet.h"


class PhotoTransferPacket : Packet {

public:
    virtual void write(BinaryStream &)const;
    ~PhotoTransferPacket();
    virtual void read(ReadOnlyBinaryStream &);
    virtual std::string getName()const;
    virtual void getId()const;
    PhotoTransferPacket();
    PhotoTransferPacket(std::string const&);
    void fromDisk(Core::Path, PhotoTransferPacket &);
    PhotoTransferPacket(std::string const&, std::string &);
};
