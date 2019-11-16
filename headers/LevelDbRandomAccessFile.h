#pragma once

class LevelDbRandomAccessFile : leveldb::RandomAccessFile {

    virtual void ~LevelDbRandomAccessFile();
    virtual void ~LevelDbRandomAccessFile();
    virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const;
}
