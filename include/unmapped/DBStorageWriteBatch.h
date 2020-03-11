#pragma once

#include "../bedrock/level/storage/LevelStorage.h"
#include <functional>
#include "./Batch.h"


class DBStorageWriteBatch : LevelStorage::Batch {

public:
    virtual ~DBStorageWriteBatch();
//  virtual void putKey(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
//  virtual void deleteKey(gsl::basic_string_span<char const, -1l>); //TODO: incomplete function definition
    virtual void flush(LevelStorage &);

    DBStorageWriteBatch();
//  void addFlushCallback(std::function<void (void)>); //TODO: incomplete function definition
    void clear();
};
