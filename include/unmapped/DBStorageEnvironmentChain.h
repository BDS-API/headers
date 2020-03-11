#pragma once

#include "../core/Path.h"
#include "./ContentIdentity.h"
#include <memory>
#include "../core/FileStorageArea.h"
#include "./DBStorageConfig.h"
#include <string>


class DBStorageEnvironmentChain {

public:

    DBStorageEnvironmentChain(DBStorageConfig const&, Core::Path const&);
//  bool isContentKeyValid(leveldb::Env *, Core::Path const&, ContentIdentity const&, std::string const&, std::shared_ptr<Core::FileStorageArea>); //TODO: incomplete function definition
//  void createFlushableEnv(leveldb::Env *, std::shared_ptr<Core::FileStorageArea>, Core::Path const&); //TODO: incomplete function definition
    ~DBStorageEnvironmentChain();
    void getEncryptedProxyEnv()const;
    void getFlushableEnv()const;
    void getPreSnapshotEnv()const;
    void getSnapshotEnv()const;
    void getCompactionListenerEnv()const;
    void getRootEnv()const;
    void onFlush();
    bool isEncrypted()const;
    bool isChainValid(bool)const;
};
