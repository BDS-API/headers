#pragma once

class DBStorageWriteBatch : LevelStorage::Batch {

    virtual ~DBStorageWriteBatch();
    virtual ~DBStorageWriteBatch();
    virtual void putKey(gsl::basic_string_span<char const, -1l>, gsl::basic_string_span<char const, -1l>);
    virtual void deleteKey(gsl::basic_string_span<char const, -1l>);
    virtual void flush(LevelStorage &);
}
