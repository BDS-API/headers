#pragma once

#include <string>
#include <memory>


class DBStorageEnvironmentChain {

public:
//  void createFlushableEnv(leveldb::Env *, std::shared_ptr<Core::FileStorageArea>, Core::Path const&); //TODO: incomplete function definition
    void getPreSnapshotEnv()const;
    bool isEncrypted()const;
    void getCompactionListenerEnv()const;
//  bool isContentKeyValid(leveldb::Env *, Core::Path const&, ContentIdentity const&, std::string const&, std::shared_ptr<Core::FileStorageArea>); //TODO: incomplete function definition
    ~DBStorageEnvironmentChain();
    DBStorageEnvironmentChain(DBStorageConfig const&, Core::Path const&);
    void getSnapshotEnv()const;
    void getFlushableEnv()const;
    void getEncryptedProxyEnv()const;
    void onFlush();
    void getRootEnv()const;
    bool isChainValid(bool)const;
};
