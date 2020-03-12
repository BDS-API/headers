#pragma once

#include <string>
#include <vector>


class SynchedActorData {

public:
    void markDirty(unsigned short);
    void getCompoundTag(unsigned short)const;
    bool hasData(unsigned short)const;
    void getShort(unsigned short)const;
    void getInt(unsigned short)const;
    void _resizeToContain(unsigned short);
    bool isDirty()const;
    void getPos(unsigned short)const;
    void _get(unsigned short);
    void _setDirty(unsigned short);
    void getVec3(unsigned short)const;
    SynchedActorData();
    void packAll()const;
    void getInt64(unsigned short)const;
    ~SynchedActorData();
    void packDirty();
    void assignValues(std::vector<std::unique_ptr<DataItem>> const&, Actor *);
    void _find(unsigned short)const;
    std::string getString(unsigned short)const;
    void getInt8(unsigned short)const;
    SynchedActorData(SynchedActorData &&);
    void getFloat(unsigned short)const;
    void markDirty(DataItem &);
};
