#pragma once

#include <memory>
#include "Path.h"
#include <functional>


namespace Core {

    class StorageAreaState {

    public:
        StorageAreaState(Core::Path);
        bool isExtendDiskSpaceEvent()const;
        void _fireExtendDiskSpaceEvent(bool, std::weak_ptr<Core::FileStorageArea> &, unsigned long const&, std::function<void (void)>);
        void checkUserStorage(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&, unsigned long const&);
        void _clearOutOfSpaceError();
//      void addListener(Core::StorageAreaStateListener *); //TODO: incomplete function definition
        bool isLowDiskSpaceWarning()const;
        void _fireOutOfDiskSpaceError(bool);
        ~StorageAreaState();
        bool isOutOfDiskSpaceError()const;
        void _notifyLowDiskSpaceWarning();
        void _notifyExtendDiskSpaceEvent(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&);
        void _clearLowDiskSpaceWarning();
//      void notifyCriticalDiskError(Core::LevelStorageState const&); //TODO: incomplete function definition
//      void _fireCriticalDiskError(bool, Core::LevelStorageState const&); //TODO: incomplete function definition
        void _fireLowDiskSpaceWarning(bool);
        void _clearExtendDiskSpaceEvent(std::weak_ptr<Core::FileStorageArea> &, unsigned long const&);
//      void removeListener(Core::StorageAreaStateListener *); //TODO: incomplete function definition
        void _notifyOutOfDiskSpaceError();
        bool isCriticalDiskError()const;
    };
}
