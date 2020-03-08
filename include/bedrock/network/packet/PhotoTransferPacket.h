#pragma once

#include "../../io/BinaryStream"
#include "../../io/ReadOnlyBinaryStream"
#include "../../../core/Path"


class PhotoTransferPacket : Packet {

public:
    virtual PhotoTransferPacket::~PhotoTransferPacket()
    virtual void getId()const;
    virtual void getName()const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PhotoTransferPacket(void);
    PhotoTransferPacket(std::string const&);
    PhotoTransferPacket(std::string const&, std::string&);
    void fromDisk(Core::Path, PhotoTransferPacket&);
};
