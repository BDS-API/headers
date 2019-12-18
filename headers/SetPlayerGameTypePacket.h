#pragma once

class SetPlayerGameTypePacket : Packet {

public:
    virtual ~SetPlayerGameTypePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetPlayerGameTypePacket(void);
    void SetPlayerGameTypePacket(GameType);
};
