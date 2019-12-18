#pragma once

class CommandOutputPacket : Packet {

public:
    virtual ~CommandOutputPacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void CommandOutputPacket(void);
    void CommandOutputPacket(CommandOrigin const&, CommandOutput const&);
    void getOriginData(void)const;
    void getOutput(void)const;
};
