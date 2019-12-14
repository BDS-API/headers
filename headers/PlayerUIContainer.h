#pragma once

class PlayerUIContainer : SimpleContainer {

public:
    virtual ~PlayerUIContainer();

    void PlayerUIContainer(std::string const&, bool, int);
    void save(void);
    void load(ListTag const&, SemVersion const&);
};
