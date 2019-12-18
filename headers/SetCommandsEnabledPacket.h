#pragma once

class SetCommandsEnabledPacket : Packet {

public:
    virtual ~SetCommandsEnabledPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetCommandsEnabledPacket(void);
    void SetCommandsEnabledPacket(bool);
    bool hasCommandsEnabled(void)const;
};
