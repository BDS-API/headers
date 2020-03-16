#pragma once

#include <functional>
#include "../bedrock/level/storage/LevelStorage.h"


class DBStorageWriteBatch : public LevelStorage::Batch {

public:
    class PerfContext;

    virtual ~DBStorageWriteBatch(); // _ZN19DBStorageWriteBatchD2Ev
    virtual void __fake_function0(); // fake
    virtual void putKey__incomplete0(long, long); //TODO: incomplete function definition // _ZN19DBStorageWriteBatch6putKeyEN3gsl17basic_string_spanIKcLln1EEES3_
    virtual void deleteKey__incomplete0(long); //TODO: incomplete function definition // _ZN19DBStorageWriteBatch9deleteKeyEN3gsl17basic_string_spanIKcLln1EEE
    virtual void flush(LevelStorage &); // _ZN19DBStorageWriteBatch5flushER12LevelStorage
    DBStorageWriteBatch(); // _ZN19DBStorageWriteBatchC2Ev
    void addFlushCallback(std::function<void (void)>); // _ZN19DBStorageWriteBatch16addFlushCallbackESt8functionIFvvEE
    void clear(); // _ZN19DBStorageWriteBatch5clearEv
    class PerfContext {

    public:
        void log(unsigned long)const; // _ZNK19DBStorageWriteBatch11PerfContext3logEm
    };
};
