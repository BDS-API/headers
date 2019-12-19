#pragma once

class BlockComponentFactory {

public:

    BlockComponentFactory(void);
    void initializeFactory(void);
    void teardownFactory(void);
    void registerDescription(std::string const&, std::function<std::unique_ptr<BlockComponentDescription, std::default_delete<BlockComponentDescription>> ()(void)>);
    void createComponentDescription(std::string const&)const;
};
