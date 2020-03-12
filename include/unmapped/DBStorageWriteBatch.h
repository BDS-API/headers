#pragma once

#include "../bedrock/level/storage/LevelStorage.h"
#include <functional>


class DBStorageWriteBatch : LevelStorage::Batch {

public:
    class PerfContext;

    virtual void flush(LevelStorage &);
//  virtual void deleteKey(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  virtual void putKey(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    ~DBStorageWriteBatch();
    DBStorageWriteBatch();
    void addFlushCallback(std::function<void (void)>);
    void clear();
    class PerfContext {

    public:
        void log(unsigned long)const;
    };
};
