#pragma once

#include "../bedrock/level/storage/LevelStorage"
#include "../bedrock/level/Batch"


class DBStorageWriteBatch : LevelStorage::Batch {

public:
    virtual DBStorageWriteBatch::~DBStorageWriteBatch()
    virtual void putKey(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>);
    virtual void deleteKey(gsl::basic_string_span<char const, -1l>);
    virtual void flush(LevelStorage &);

    DBStorageWriteBatch(void);
    void addFlushCallback(std::function<void ()(void)>);
    void clear();
};
