#pragma once

class AddBehaviorTreePacket : Packet {

public:
    virtual ~AddBehaviorTreePacket();
    virtual void getId(void)const;
    virtual void getName[abi:cxx11](void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void AddBehaviorTreePacket(void);
    void AddBehaviorTreePacket(std::string const&);
};
