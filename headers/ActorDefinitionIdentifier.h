#pragma once

class ActorDefinitionIdentifier {

public:

    void ActorDefinitionIdentifier(void);
    void ActorDefinitionIdentifier(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>>);
    void _initialize(void);
    void ActorDefinitionIdentifier(ActorDefinitionIdentifier const&);
    void ActorDefinitionIdentifier(ActorDefinitionIdentifier&&);
    void _extractIdentifier(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, ActorDefinitionIdentifier&);
    void ActorDefinitionIdentifier(char const*);
    void ActorDefinitionIdentifier(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void ActorDefinitionIdentifier(ActorType);
    bool isEmpty(void)const;
    void clear(void);
    void initialize(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void initialize(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setIdentifier(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void setInitEvent(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void getCanonicalHash(void)const;
    bool isVanilla(void)const;
    void _getLegacyActorType(void)const;
};
