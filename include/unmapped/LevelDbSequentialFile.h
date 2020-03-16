#pragma once



class LevelDbSequentialFile /*public leveldb::SequentialFile*/ { //TODO: incomplete class definition

public:
    virtual ~LevelDbSequentialFile(); // _ZN21LevelDbSequentialFileD2Ev
    virtual void __fake_function0(); // fake
    virtual void Read__incomplete0(unsigned long, long *, char *); //TODO: incomplete function definition // _ZN21LevelDbSequentialFile4ReadEmPN7leveldb5SliceEPc
    virtual void Skip(unsigned long); // _ZN21LevelDbSequentialFile4SkipEm
    LevelDbSequentialFile(Core::File &&); // _ZN21LevelDbSequentialFileC2EON4Core4FileE
};
