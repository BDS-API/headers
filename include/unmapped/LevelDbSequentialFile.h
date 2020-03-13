#pragma once



class LevelDbSequentialFile /*leveldb::SequentialFile*/ { //TODO: incomplete class definition

public:
    ~LevelDbSequentialFile(); // _ZN21LevelDbSequentialFileD2Ev
//  virtual void Read(unsigned long, leveldb::Slice *, char *); //TODO: incomplete function definition // _ZN21LevelDbSequentialFile4ReadEmPN7leveldb5SliceEPc
    virtual void Skip(unsigned long); // _ZN21LevelDbSequentialFile4SkipEm
    LevelDbSequentialFile(Core::File &&); // _ZN21LevelDbSequentialFileC2EON4Core4FileE
};
