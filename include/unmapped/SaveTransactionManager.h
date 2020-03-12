#pragma once

#include <functional>


class SaveTransactionManager {

public:
    void onEndCompaction();
    void deleteShowIconFunction();
    void _showGlobalSaveIcon();
    SaveTransactionManager(std::function<void (bool)>);
    void onBeginCompaction();
    ~SaveTransactionManager();
    void _hideGlobalSaveIcon();
};
