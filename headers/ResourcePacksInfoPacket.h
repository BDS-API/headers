#pragma once

class ResourcePacksInfoPacket : Packet {

    virtual void ResourcePacksInfo~ResourcePacksInfoPacket();
    virtual void ResourcePacksInfo~ResourcePacksInfoPacket();
    virtual void ResourcePacksInfogetId(void)const;
    virtual void _ZNK23ResourcePacksInfoPacket7getNameB5cxx11Ev;
    virtual void ResourcePacksInfowrite(BinaryStream &)const;
    virtual void ResourcePacksInforead(ReadOnlyBinaryStream &);
    virtual void disallowBatching(void)const;
}
