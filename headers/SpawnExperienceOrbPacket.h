#pragma once

class SpawnExperienceOrbPacket : Packet {

    virtual void SpawnExperienceOrbPacket::~SpawnExperienceOrbPacket();
    virtual void SpawnExperienceOrbPacket::~SpawnExperienceOrbPacket();
    virtual void getId(void)const;
    virtual void _ZNK24SpawnExperienceOrbPacket7getNameB5cxx11Ev;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
