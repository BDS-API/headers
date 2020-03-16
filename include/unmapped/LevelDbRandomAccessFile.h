#pragma once



class LevelDbRandomAccessFile /*public leveldb::RandomAccessFile*/ { //TODO: incomplete class definition

public:
    virtual ~LevelDbRandomAccessFile(); // _ZN23LevelDbRandomAccessFileD2Ev
    virtual void __fake_function0(); // fake
    virtual void Read__incomplete0(unsigned long, unsigned long, long *, char *)const; //TODO: incomplete function definition // _ZNK23LevelDbRandomAccessFile4ReadEmmPN7leveldb5SliceEPc
    LevelDbRandomAccessFile(Core::File &&); // _ZN23LevelDbRandomAccessFileC2EON4Core4FileE
};
