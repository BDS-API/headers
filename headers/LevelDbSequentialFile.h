#pragma once

class LevelDbSequentialFile : leveldb::SequentialFile {

public:
    virtual ~LevelDbSequentialFile();
    virtual void Read(unsigned long, leveldb::Slice *, char *);
    virtual void Skip(unsigned long);

    void LevelDbSequentialFile(Core::File &&);
};
