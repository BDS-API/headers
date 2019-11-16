#pragma once

class SavedData {

    virtual void ~SavedData();
    virtual void ~SavedData();
    virtual void deserialize(CompoundTag const&);
    virtual void serialize(CompoundTag &)const;
}
