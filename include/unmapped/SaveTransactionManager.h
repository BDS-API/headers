#pragma once

class SaveTransactionManager {

public:

    SaveTransactionManager(std::function<void ()(bool)>);
    void deleteShowIconFunction(void);
    void onBeginCompaction(void);
    void _showGlobalSaveIcon(void);
    void onEndCompaction(void);
    void _hideGlobalSaveIcon(void);
};
