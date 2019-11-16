#pragma once

class LevelDbRandomAccessFile : leveldb::RandomAccessFile {

    virtual ~LevelDbRandomAccessFile();
    virtual ~LevelDbRandomAccessFile();
    virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const;
}
