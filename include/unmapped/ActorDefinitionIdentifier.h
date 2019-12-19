#pragma once

class ActorDefinitionIdentifier {

public:
    static long NAMESPACE_SEPARATOR[abi:cxx11];
    static long EVENT_BEGIN[abi:cxx11];
    static long EVENT_END[abi:cxx11];


    ActorDefinitionIdentifier(void);
    ActorDefinitionIdentifier(std::string, std::string, std::string);
    void _initialize(void);
    ActorDefinitionIdentifier(ActorDefinitionIdentifier const&);
    ActorDefinitionIdentifier(ActorDefinitionIdentifier&&);
    void _extractIdentifier(std::string const&, ActorDefinitionIdentifier&);
    ActorDefinitionIdentifier(char const*);
    ActorDefinitionIdentifier(std::string const&);
    ActorDefinitionIdentifier(ActorType);
    bool isEmpty(void)const;
    void clear(void);
    void initialize(std::string const&);
    void initialize(std::string const&, std::string const&, std::string const&);
    void setIdentifier(std::string const&);
    void setInitEvent(std::string const&);
    void getCanonicalHash(void)const;
    bool isVanilla(void)const;
    void _getLegacyActorType(void)const;
};
