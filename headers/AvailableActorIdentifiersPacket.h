#pragma once

class AvailableActorIdentifiersPacket : Packet {

    virtual void AvailableActorIdentifiers~AvailableActorIdentifiersPacket();
    virtual void AvailableActorIdentifiers~AvailableActorIdentifiersPacket();
    virtual void AvailableActorIdentifiersgetId(void)const;
    virtual void _ZNK31AvailableActorIdentifiersPacket7getNameB5cxx11Ev;
    virtual void AvailableActorIdentifierswrite(BinaryStream &)const;
    virtual void AvailableActorIdentifiersread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
