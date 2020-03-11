#pragma once

#include "../../description/blockcomponent/BlockComponentDescription.h"
#include <memory>
#include <functional>
#include <string>


class BlockComponentFactory {

public:

    BlockComponentFactory();
    void initializeFactory();
    ~BlockComponentFactory();
    void teardownFactory();
//  void registerDescription(std::string const&, std::function<std::unique_ptr<BlockComponentDescription, std::default_delete<BlockComponentDescription>> (void)>); //TODO: incomplete function definition
    std::string getRegisteredComponentNames()const;
    void createComponentDescription(std::string const&)const;
};
