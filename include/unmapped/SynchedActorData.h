#pragma once

#include "../bedrock/actor/Actor.h"
#include "DataItem.h"
#include <vector>
#include <memory>


class SynchedActorData {

public:
    void getShort(unsigned short)const;
    bool isDirty()const;
    void _setDirty(unsigned short);
    void packDirty();
    ~SynchedActorData();
    void getInt(unsigned short)const;
    void getInt64(unsigned short)const;
    void _find(unsigned short)const;
    void getInt8(unsigned short)const;
    void markDirty(unsigned short);
    void _resizeToContain(unsigned short);
    void assignValues(std::vector<std::unique_ptr<DataItem>> const&, Actor *);
    void markDirty(DataItem &);
    SynchedActorData();
    std::string getString(unsigned short)const;
    void packAll()const;
    void _get(unsigned short);
    bool hasData(unsigned short)const;
    void getVec3(unsigned short)const;
    void getPos(unsigned short)const;
    void getCompoundTag(unsigned short)const;
    SynchedActorData(SynchedActorData &&);
    void getFloat(unsigned short)const;
};
