#pragma once

#include <string>
#include "ContentIdentity.h"
#include "../core/Path.h"
#include <memory>
#include "../core/FileStorageArea.h"
#include "DBStorageConfig.h"


class DBStorageEnvironmentChain {

public:
    void getRootEnv()const;
    ~DBStorageEnvironmentChain();
    void getCompactionListenerEnv()const;
//  bool isContentKeyValid(leveldb::Env *, Core::Path const&, ContentIdentity const&, std::string const&, std::shared_ptr<Core::FileStorageArea>); //TODO: incomplete function definition
    bool isEncrypted()const;
    void getEncryptedProxyEnv()const;
//  void createFlushableEnv(leveldb::Env *, std::shared_ptr<Core::FileStorageArea>, Core::Path const&); //TODO: incomplete function definition
    void onFlush();
    void getSnapshotEnv()const;
    void getPreSnapshotEnv()const;
    bool isChainValid(bool)const;
    DBStorageEnvironmentChain(DBStorageConfig const&, Core::Path const&);
    void getFlushableEnv()const;
};
