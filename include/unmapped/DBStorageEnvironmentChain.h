#pragma once



class DBStorageEnvironmentChain {

public:

    DBStorageEnvironmentChain(DBStorageConfig const&, Core::Path const&);
    bool isContentKeyValid(leveldb::Env *, Core::Path const&, ContentIdentity const&, std::string const&, std::shared_ptr<Core::FileStorageArea>);
    void createFlushableEnv(leveldb::Env *, std::shared_ptr<Core::FileStorageArea>, Core::Path const&);
    void getEncryptedProxyEnv(void)const;
    void getFlushableEnv(void)const;
    void getPreSnapshotEnv(void)const;
    void getSnapshotEnv(void)const;
    void getCompactionListenerEnv(void)const;
    void getRootEnv(void)const;
    void onFlush(void);
    bool isEncrypted(void)const;
    bool isChainValid(bool)const;
};
