#pragma once

class CommandOutput {

public:

    void CommandOutput(CommandOutputType);
    void CommandOutput(CommandOutput const&);
    void load(CommandOutputType, int, std::vector<CommandOutputMessage, std::allocator<CommandOutputMessage>> &&, std::unique_ptr<CommandPropertyBag, std::default_delete<std::unique_ptr>> &&);
    void error(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter>> const&);
    void addMessage(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter>> const&, CommandOutputMessageType);
    void forceOutput(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter>> const&);
    void success(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::vector<CommandOutputParameter, std::allocator<CommandOutputParameter>> const&);
    void success(void);
    void getSuccessCount(void)const;
    void wantsData(void)const;
    void empty(void)const;
    void getData(void)const;
    void addToResultList(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&);
    void addToResultList(std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char>> const&, Actor const&);
    void getType(void)const;
    void getMessages(void)const;
};
