#pragma once

#include "../../io/BinaryStream.h"
#include "./PhotoTransferPacket.h"
#include "../../io/ReadOnlyBinaryStream.h"
#include "../../../core/Path.h"
#include "./Packet.h"
#include <string>


class PhotoTransferPacket : Packet {

public:
    virtual ~PhotoTransferPacket();
    virtual void getId()const;
    virtual std::string getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PhotoTransferPacket();
    PhotoTransferPacket(std::string const&);
    PhotoTransferPacket(std::string const&, std::string &);
    void fromDisk(Core::Path, PhotoTransferPacket &);
};
