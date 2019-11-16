#pragma once

class StopSoundPacket : Packet {

    virtual void StopSound~StopSoundPacket();
    virtual void StopSound~StopSoundPacket();
    virtual void StopSoundgetId(void)const;
    virtual void _ZNK15StopSoundPacket7getNameB5cxx11Ev;
    virtual void StopSoundwrite(BinaryStream &)const;
    virtual void StopSoundread(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
