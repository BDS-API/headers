#pragma once



namespace Bedrock {

class Threading {

public:

    void GetAsyncErrorCategory();
//  void MakeErrorCode(Bedrock::Threading::AsyncErrc); //TODO: incomplete function definition
    void ON_MAIN_THREAD();
//  void IS_MAIN_THREAD(std::thread::id const&); //TODO: incomplete function definition
    void ON_SERVER_THREAD();
//  void ASSIGN_MAIN_THREAD(std::thread::id const&); //TODO: incomplete function definition
//  void ASSIGN_SERVER_THREAD(std::thread::id const&); //TODO: incomplete function definition
    void GET_MAIN_THREAD_ID();
};

}