#pragma once

class TradeTables {

public:

    void TradeTables(void);
    void reload(Level &);
    void _parseAndStoreTradeTable(ResourcePackManager *, Core::Path const&);
    void fetchTable(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
};
