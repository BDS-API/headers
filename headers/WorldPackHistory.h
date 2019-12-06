#pragma once

class WorldPackHistory {

public:

    void WorldPackHistory(void);
    void initializeFromJson(Json::Value const&);
    void setUnlocalizedName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addLocalizedName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getPackIdVersion(void)const;
    void setPackIdVersion(PackIdVersion const&);
    void getLocalizedName(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&)const;
    void setLocalizedNames(std::unordered_map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::hash<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::equal_to<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>>>>);
    bool hasLocalizedNames(void)const;
    void getCanBeRedownloaded(void)const;
    void setCanBeRedownloaded(bool);
    void getSubpackCount(void)const;
    void setSubpackCount(int);
    bool hasSubpacks(void)const;
    void getSourceUUID(void)const;
    void setSourceUUID(mce::UUID const&);
    bool hasSourceUUID(void)const;
    void toJsonValue(void)const;
    void WorldPackHistory(WorldPackHistory const&);
    void WorldPackHistory(WorldPackHistory&&);
};
