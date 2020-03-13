#pragma once

#include <string>
#include <memory>


class DBStorageEnvironmentChain {

public:
    DBStorageEnvironmentChain(DBStorageConfig const&, Core::Path const&); // _ZN25DBStorageEnvironmentChainC2ERK15DBStorageConfigRKN4Core4PathE
//  bool isContentKeyValid(leveldb::Env *, Core::Path const&, ContentIdentity const&, std::string const&, std::shared_ptr<Core::FileStorageArea>); //TODO: incomplete function definition // _ZN25DBStorageEnvironmentChain17isContentKeyValidEPN7leveldb3EnvERKN4Core4PathERK15ContentIdentityRKNSt7__cxx1112basic_stringIcSt11char_traitsIcESaIcEEESt10shared_ptrINS3_15FileStorageAreaEE
//  void createFlushableEnv(leveldb::Env *, std::shared_ptr<Core::FileStorageArea>, Core::Path const&); //TODO: incomplete function definition // _ZN25DBStorageEnvironmentChain18createFlushableEnvEPN7leveldb3EnvESt10shared_ptrIN4Core15FileStorageAreaEERKNS4_4PathE
    ~DBStorageEnvironmentChain(); // _ZN25DBStorageEnvironmentChainD2Ev
    void getEncryptedProxyEnv()const; // _ZNK25DBStorageEnvironmentChain20getEncryptedProxyEnvEv
    void getFlushableEnv()const; // _ZNK25DBStorageEnvironmentChain15getFlushableEnvEv
    void getPreSnapshotEnv()const; // _ZNK25DBStorageEnvironmentChain17getPreSnapshotEnvEv
    void getSnapshotEnv()const; // _ZNK25DBStorageEnvironmentChain14getSnapshotEnvEv
    void getCompactionListenerEnv()const; // _ZNK25DBStorageEnvironmentChain24getCompactionListenerEnvEv
    void getRootEnv()const; // _ZNK25DBStorageEnvironmentChain10getRootEnvEv
    void onFlush(); // _ZN25DBStorageEnvironmentChain7onFlushEv
    bool isEncrypted()const; // _ZNK25DBStorageEnvironmentChain11isEncryptedEv
    bool isChainValid(bool)const; // _ZNK25DBStorageEnvironmentChain12isChainValidEb
};
