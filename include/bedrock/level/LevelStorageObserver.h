#pragma once

#include <functional>
#include <string>


class LevelStorageObserver {

public:
    void onSave(std::string const&);
    ~LevelStorageObserver();
    LevelStorageObserver(std::function<void (std::string const&)>);
};
