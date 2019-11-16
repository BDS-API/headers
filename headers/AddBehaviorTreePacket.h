#pragma once

class AddBehaviorTreePacket : Packet {

    virtual void AddBehaviorTreePacket::~AddBehaviorTreePacket();
    virtual void AddBehaviorTreePacket::~AddBehaviorTreePacket();
    virtual void getId(void)const;
    virtual void _ZNK21AddBehaviorTreePacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
