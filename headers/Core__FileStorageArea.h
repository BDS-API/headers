#pragma once

class Core::FileStorageArea {

    virtual void Core::FileStorageArea::~FileStorageArea();
    virtual void Core::FileStorageArea::~FileStorageArea();
    virtual void __cxa_pure_virtual;
    virtual void __cxa_pure_virtual;
    virtual void __cxa_pure_virtual;
    virtual void __cxa_pure_virtual;
    virtual void notifyChangeInFileSize(long, long);
    virtual void handlesPendingWrites(void)const;
    virtual void informPendingWriteSize(unsigned long);
    virtual void supportsExtendSize(void)const;
    virtual void canExtendSize(void)const;
    virtual void resetCanAttemptExtendSize(void);
    virtual void getExtendSizeThreshold(unsigned long &)const;
    virtual void attemptExtendSize(long const&, std::function<void ()(void)>);
    virtual void preemptiveExtendSize(unsigned long, std::function<void ()(void)>, std::function<void ()(void)>);
    virtual void unloadFlatFileManifests(bool);
    virtual void canFlushToDisk(void)const;
    virtual void needsTick(void)const;
    virtual void tick(void);
    virtual void flushImmediately(void);
    virtual void enableFlushToDisk(bool);
    virtual void getFlushableLevelDbEnvType(void)const;
    virtual void getTransactionWriteSizeLimit(void)const;
    virtual void setSaveDataIcon(Core::Path const&);
    virtual void onFlushTransactionComplete(void);
    virtual void _commit(void);
    virtual void _onTransactionsEmpty(bool);
}
