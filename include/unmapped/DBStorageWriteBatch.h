#pragma once

#include <functional>
#include "../bedrock/level/storage/LevelStorage.h"


class DBStorageWriteBatch : LevelStorage::Batch {

public:
    class PerfContext;

    ~DBStorageWriteBatch();
//  virtual void putKey(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  virtual void deleteKey(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    virtual void flush(LevelStorage &);
    void addFlushCallback(std::function<void (void)>);
    DBStorageWriteBatch();
    void clear();
    namespace PerfContext {

        void log(unsigned long)const;
    };
};
