#pragma once

#include <functional>
#include "../bedrock/level/storage/LevelStorage.h"


class DBStorageWriteBatch : LevelStorage::Batch {

public:
    class PerfContext;

    ~DBStorageWriteBatch(); // _ZN19DBStorageWriteBatchD2Ev
//  virtual void putKey(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN19DBStorageWriteBatch6putKeyEN3gsl17basic_string_spanIKcLln1EEES3_
//  virtual void deleteKey(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition // _ZN19DBStorageWriteBatch9deleteKeyEN3gsl17basic_string_spanIKcLln1EEE
    virtual void flush(LevelStorage &); // _ZN19DBStorageWriteBatch5flushER12LevelStorage
    DBStorageWriteBatch(); // _ZN19DBStorageWriteBatchC2Ev
    void addFlushCallback(std::function<void (void)>); // _ZN19DBStorageWriteBatch16addFlushCallbackESt8functionIFvvEE
    void clear(); // _ZN19DBStorageWriteBatch5clearEv
    class PerfContext {

    public:
        void log(unsigned long)const; // _ZNK19DBStorageWriteBatch11PerfContext3logEm
    };
};
