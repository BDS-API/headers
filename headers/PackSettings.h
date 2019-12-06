#pragma once

class PackSettings {

public:

    void getSetting(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void setSetting(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&);
    void loadPackSettings(PackIdVersion const&, Json::Value const&);
    void _initPackSetting(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Json::Value const&);
    void savePackSettings(PackIdVersion const&);
    void registerObserver(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, void *, std::function<void ()(Json::Value const&)> const&);
    void unregisterObserver(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, void *);
    void unregisterObserver(void *);
    void getAllSettings(void)const;
    void PackSettings(void);
};
