#pragma once

class PhotoTransferPacket : Packet {

public:
    virtual ~PhotoTransferPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PhotoTransferPacket(void);
    void PhotoTransferPacket(std::string const&);
    void PhotoTransferPacket(std::string const&, std::string&);
    void fromDisk(Core::Path, PhotoTransferPacket&);
};
