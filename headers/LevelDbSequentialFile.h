#pragma once

class LevelDbSequentialFile : leveldb::SequentialFile {

    virtual ~LevelDbSequentialFile();
    virtual ~LevelDbSequentialFile();
    virtual void Read(unsigned long, leveldb::Slice *, char *);
    virtual void Skip(unsigned long);
}
