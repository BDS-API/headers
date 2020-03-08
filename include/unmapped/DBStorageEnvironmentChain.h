#pragma once

#include "../core/FileStorageArea"
#include "../core/Path"


class DBStorageEnvironmentChain {

public:

    DBStorageEnvironmentChain(DBStorageConfig const&, Core::Path const&);
    bool isContentKeyValid(leveldb::Env *, Core::Path const&, ContentIdentity const&, std::string const&, std::shared_ptr<Core::FileStorageArea>);
    void createFlushableEnv(leveldb::Env *, std::shared_ptr<Core::FileStorageArea>, Core::Path const&);
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
