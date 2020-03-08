#pragma once

#include "../bedrock/io/IDataInput"
#include "../bedrock/nbt/CompoundTag"
#include "../bedrock/io/IDataOutput"


class NbtIo {

public:

    void write(CompoundTag const*, IDataOutput &);
    void read(IDataInput &);
};
