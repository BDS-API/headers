#pragma once

#include <string>
#include <vector>


class SynchedActorData {

public:
    void _setDirty(unsigned short); // _ZN16SynchedActorData9_setDirtyEt
    void markDirty(DataItem &); // _ZN16SynchedActorData9markDirtyER8DataItem
    void markDirty(unsigned short); // _ZN16SynchedActorData9markDirtyEt
    bool isDirty()const; // _ZNK16SynchedActorData7isDirtyEv
    SynchedActorData(); // _ZN16SynchedActorDataC2Ev
    SynchedActorData(SynchedActorData &&); // _ZN16SynchedActorDataC2EOS_
    ~SynchedActorData(); // _ZN16SynchedActorDataD2Ev
    void packDirty(); // _ZN16SynchedActorData9packDirtyEv
    void packAll()const; // _ZNK16SynchedActorData7packAllEv
    void assignValues(std::vector<std::unique_ptr<DataItem>> const&, Actor *); // _ZN16SynchedActorData12assignValuesERKSt6vectorISt10unique_ptrI8DataItemSt14default_deleteIS2_EESaIS5_EEP5Actor
    void _find(unsigned short)const; // _ZNK16SynchedActorData5_findEt
    void _resizeToContain(unsigned short); // _ZN16SynchedActorData16_resizeToContainEt
    void _get(unsigned short); // _ZN16SynchedActorData4_getEt
    void getInt8(unsigned short)const; // _ZNK16SynchedActorData7getInt8Et
    void getShort(unsigned short)const; // _ZNK16SynchedActorData8getShortEt
    void getInt(unsigned short)const; // _ZNK16SynchedActorData6getIntEt
    void getInt64(unsigned short)const; // _ZNK16SynchedActorData8getInt64Et
    void getFloat(unsigned short)const; // _ZNK16SynchedActorData8getFloatEt
    std::string getString(unsigned short)const; // _ZNK16SynchedActorData9getStringB5cxx11Et
    void getCompoundTag(unsigned short)const; // _ZNK16SynchedActorData14getCompoundTagEt
    void getPos(unsigned short)const; // _ZNK16SynchedActorData6getPosEt
    void getVec3(unsigned short)const; // _ZNK16SynchedActorData7getVec3Et
    bool hasData(unsigned short)const; // _ZNK16SynchedActorData7hasDataEt
};
