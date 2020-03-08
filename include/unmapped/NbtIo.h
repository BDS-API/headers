#pragma once

#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/io/IDataInput"


class NbtIo {

public:

    void write(CompoundTag const*, IDataOutput &);
    void read(IDataInput &);
};
