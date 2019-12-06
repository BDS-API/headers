#pragma once

class BlockComponentFactory {

public:

    void BlockComponentFactory(void);
    void initializeFactory(void);
    void teardownFactory(void);
    void registerDescription(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::function<std::unique_ptr<BlockComponentDescription, std::default_delete<BlockComponentDescription>> ()(void)>);
    void createComponentDescription(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
};
