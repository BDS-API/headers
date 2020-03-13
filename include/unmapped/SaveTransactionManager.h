#pragma once

#include <functional>


class SaveTransactionManager {

public:
    SaveTransactionManager(std::function<void (bool)>); // _ZN22SaveTransactionManagerC2ESt8functionIFvbEE
    ~SaveTransactionManager(); // _ZN22SaveTransactionManagerD2Ev
    void deleteShowIconFunction(); // _ZN22SaveTransactionManager22deleteShowIconFunctionEv
    void onBeginCompaction(); // _ZN22SaveTransactionManager17onBeginCompactionEv
    void _showGlobalSaveIcon(); // _ZN22SaveTransactionManager19_showGlobalSaveIconEv
    void onEndCompaction(); // _ZN22SaveTransactionManager15onEndCompactionEv
    void _hideGlobalSaveIcon(); // _ZN22SaveTransactionManager19_hideGlobalSaveIconEv
};
