#pragma once

#include <memory>
#include <functional>
#include <string>
#include "../../description/blockcomponent/BlockComponentDescription.h"


class BlockComponentFactory {

public:
    void teardownFactory();
    std::string getRegisteredComponentNames()const;
    BlockComponentFactory();
    void initializeFactory();
    void registerDescription(std::string const&, std::function<std::unique_ptr<BlockComponentDescription> (void)>);
    ~BlockComponentFactory();
    void createComponentDescription(std::string const&)const;
};
