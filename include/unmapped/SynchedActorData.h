#pragma once

#include "../bedrock/actor/Actor"


class SynchedActorData {

public:

    void _setDirty(unsigned short);
    void markDirty(DataItem &);
    void markDirty(unsigned short);
    bool isDirty()const;
    SynchedActorData(void);
    SynchedActorData(SynchedActorData&&);
    void packDirty();
    void packAll()const;
    void assignValues(std::vector<std::unique_ptr<DataItem, std::default_delete<DataItem>>, std::allocator<std::unique_ptr<DataItem, std::default_delete<DataItem>>>> const&, Actor *);
    void _find(unsigned short)const;
    void _resizeToContain(unsigned short);
    void _get(unsigned short);
    void getInt8(unsigned short)const;
    void getShort(unsigned short)const;
    void getInt(unsigned short)const;
    void getInt64(unsigned short)const;
    void getFloat(unsigned short)const;
    void getCompoundTag(unsigned short)const;
    void getPos(unsigned short)const;
    void getVec3(unsigned short)const;
    bool hasData(unsigned short)const;
};
