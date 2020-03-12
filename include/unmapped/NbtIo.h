#pragma once

#include "../bedrock/io/IDataInput.h"
#include "../bedrock/io/IDataOutput.h"
#include "../bedrock/nbt/CompoundTag.h"


namespace NbtIo {

    void write(CompoundTag const*, IDataOutput &);
    void read(IDataInput &);
};
