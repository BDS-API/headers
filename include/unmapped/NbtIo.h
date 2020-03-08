#pragma once

#include "../bedrock/io/IDataInput"
#include "../bedrock/io/IDataOutput"
#include "../bedrock/nbt/CompoundTag"


class NbtIo {

public:

    void write(CompoundTag const*, IDataOutput &);
    void read(IDataInput &);
};
