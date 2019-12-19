#pragma once

class NbtIo {

public:

    void write(CompoundTag const*, IDataOutput &);
    void read(IDataInput &);
};
