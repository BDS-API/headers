#pragma once

class EventPacket : Packet {

    virtual void Event~EventPacket();
    virtual void Event~EventPacket();
    virtual void EventgetId(void)const;
    virtual void _ZNK11EventPacket7getNameB5cxx11Ev;
    virtual void Eventwrite(BinaryStream &)const;
    virtual void Eventread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
