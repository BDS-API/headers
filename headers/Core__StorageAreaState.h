#pragma once

class Core::StorageAreaState {

public:

    void StorageAreaState(Core::Path);
    void addListener(Core::StorageAreaStateListener *);
    void removeListener(Core::StorageAreaStateListener *);
    bool isExtendDiskSpaceEvent(void)const;
    bool isLowDiskSpaceWarning(void)const;
    bool isOutOfDiskSpaceError(void)const;
    bool isCriticalDiskError(void)const;
    void checkUserStorage(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&, unsigned long const&);
    void _notifyExtendDiskSpaceEvent(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&);
    void _clearExtendDiskSpaceEvent(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&);
    void _notifyOutOfDiskSpaceError(void);
    void _notifyLowDiskSpaceWarning(void);
    void _clearLowDiskSpaceWarning(void);
    void _clearOutOfSpaceError(void);
    void notifyCriticalDiskError(Core::LevelStorageState const&);
    void _fireExtendDiskSpaceEvent(bool, std::weak_ptr<Core::FileStorageArea> &, unsigned long const&, std::function<void ()(void)>);
    void _fireLowDiskSpaceWarning(bool);
    void _fireOutOfDiskSpaceError(bool);
    void _fireCriticalDiskError(bool, Core::LevelStorageState const&);
};
