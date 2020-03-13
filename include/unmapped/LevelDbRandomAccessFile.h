#pragma once



class LevelDbRandomAccessFile /*leveldb::RandomAccessFile*/ { //TODO: incomplete class definition

public:
    ~LevelDbRandomAccessFile(); // _ZN23LevelDbRandomAccessFileD2Ev
//  virtual void Read(unsigned long, unsigned long, leveldb::Slice *, char *)const; //TODO: incomplete function definition // _ZNK23LevelDbRandomAccessFile4ReadEmmPN7leveldb5SliceEPc
    LevelDbRandomAccessFile(Core::File &&); // _ZN23LevelDbRandomAccessFileC2EON4Core4FileE
};
