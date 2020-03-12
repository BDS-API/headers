#pragma once



class LevelDbSequentialFile /*leveldb::SequentialFile*/ { //TODO: incomplete class definition

public:
    ~LevelDbSequentialFile();
//  virtual void Read(unsigned long, leveldb::Slice *, char *); //TODO: incomplete function definition
    virtual void Skip(unsigned long);
    LevelDbSequentialFile(Core::File &&);
};
