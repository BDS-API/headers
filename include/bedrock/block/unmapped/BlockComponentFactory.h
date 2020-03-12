#pragma once

#include <memory>
#include <string>
#include <functional>


class BlockComponentFactory {

public:
    std::string getRegisteredComponentNames()const;
    ~BlockComponentFactory();
    void registerDescription(std::string const&, std::function<std::unique_ptr<BlockComponentDescription> (void)>);
    void createComponentDescription(std::string const&)const;
    void teardownFactory();
    BlockComponentFactory();
    void initializeFactory();
};
