#pragma once

class PhotoTransferPacket : Packet {

public:
    virtual PhotoTransferPacket::~PhotoTransferPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PhotoTransferPacket(void);
    PhotoTransferPacket(std::string const&);
    PhotoTransferPacket(std::string const&, std::string&);
    void fromDisk(Core::Path, PhotoTransferPacket&);
};
