#pragma once

class PlayerSkinPacket : Packet {

public:
    virtual PlayerSkinPacket::~PlayerSkinPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    PlayerSkinPacket(void);
    PlayerSkinPacket(mce::UUID, SerializedSkin const&, std::string const&, std::string const&);
};
