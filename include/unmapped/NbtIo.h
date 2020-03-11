#pragma once

#include "../bedrock/io/IDataOutput.h"
#include "../bedrock/nbt/CompoundTag.h"
#include "../bedrock/io/IDataInput.h"


class NbtIo {

public:

    void write(CompoundTag const*, IDataOutput &);
    void read(IDataInput &);
};
