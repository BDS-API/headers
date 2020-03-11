#pragma once

#include "./DBStorageToken.h"
#include <atomic>


namespace DBStorage {

class DBStorageToken {

public:

    DBStorageToken(std::atomic<int> &);
    DBStorageToken(DBStorage::DBStorageToken &&);
    ~DBStorageToken();
    DBStorageToken(DBStorage::DBStorageToken const&);
};

}