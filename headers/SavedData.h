#pragma once

class SavedData {

    virtual ~SavedData();
    virtual ~SavedData();
    virtual void deserialize(CompoundTag const&);
    virtual void serialize(CompoundTag &)const;
}
