#pragma once

class SetDefaultGameTypePacket : Packet {

public:
    virtual ~SetDefaultGameTypePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetDefaultGameTypePacket(void);
    void SetDefaultGameTypePacket(GameType);
};
