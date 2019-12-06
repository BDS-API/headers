#pragma once

class LevelDbRandomAccessFile : leveldb::RandomAccessFile {

public:
    virtual ~LevelDbRandomAccessFile();
    virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const;

    void LevelDbRandomAccessFile(Core::File &&);
};
