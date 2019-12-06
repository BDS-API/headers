#pragma once

class SetActorDataPacket : Packet {

public:
    virtual ~SetActorDataPacket();
    virtual void getId(void)const;
    virtual void write(BinaryStream &)const;
    virtual void read(ReadOnlyBinaryStream &);

    void SetActorDataPacket(void);
    void SetActorDataPacket(ActorRuntimeID, SynchedActorData &, bool);
    void getUnpackedData(void)const;
};
