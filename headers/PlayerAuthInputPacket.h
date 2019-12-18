#pragma once

class PlayerAuthInputPacket : Packet {

public:
    virtual ~PlayerAuthInputPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void PlayerAuthInputPacket(void);
    void getInput(PlayerAuthInputPacket::InputData)const;
    void setInput(PlayerAuthInputPacket::InputData, bool);
};
