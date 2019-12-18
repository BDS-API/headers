#pragma once

class PlayerListPacket : Packet {

public:
    virtual ~PlayerListPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PlayerListPacket(void);
    void PlayerListPacket(mce::UUID const&);
    void add(PlayerListEntry const&);
};
