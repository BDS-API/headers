#pragma once

class PlayerSkinPacket : Packet {

public:
    virtual ~PlayerSkinPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PlayerSkinPacket(void);
    void PlayerSkinPacket(mce::UUID, SerializedSkin const&, std::string const&, std::string const&);
};
