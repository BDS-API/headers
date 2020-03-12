#pragma once



class LevelDbRandomAccessFile /*leveldb::RandomAccessFile*/ { //TODO: incomplete class definition

public:
    ~LevelDbRandomAccessFile();
//  virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const; //TODO: incomplete function definition
    LevelDbRandomAccessFile(Core::File &&);
};
