#pragma once



using namespace DBStorage;

class DBStorageToken {

public:

    DBStorageToken(std::atomic<int> &);
    DBStorageToken(DBStorage::DBStorageToken&&);
    DBStorageToken(DBStorage::DBStorageToken const&);
};
