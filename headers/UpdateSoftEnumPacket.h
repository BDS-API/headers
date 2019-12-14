#pragma once

class UpdateSoftEnumPacket : Packet {

public:
    virtual ~UpdateSoftEnumPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void UpdateSoftEnumPacket(void);
    void UpdateSoftEnumPacket(SoftEnumUpdateType, std::string const&, std::vector<std::string, std::allocator<std::string>> const&);
    void getType(void)const;
};
