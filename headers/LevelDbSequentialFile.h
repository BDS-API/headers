#pragma once

class LevelDbSequentialFile : leveldb::SequentialFile {

    virtual void ~LevelDbSequentialFile();
    virtual void ~LevelDbSequentialFile();
    virtual void Read(unsigned long, leveldb::Slice *, char *);
    virtual void Skip(unsigned long);
}
