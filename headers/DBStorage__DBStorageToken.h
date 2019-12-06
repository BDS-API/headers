#pragma once

class DBStorage::DBStorageToken {

public:

    void DBStorageToken(std::atomic<int> &);
    void DBStorageToken(DBStorage::DBStorageToken&&);
    void DBStorageToken(DBStorage::DBStorageToken const&);
};
