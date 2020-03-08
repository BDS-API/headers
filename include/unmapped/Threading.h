#pragma once



using namespace Bedrock;

class Threading {

public:

    void GetAsyncErrorCategory();
    void MakeErrorCode(Bedrock::Threading::AsyncErrc);
    void ON_MAIN_THREAD();
    void IS_MAIN_THREAD(std::thread::id const&);
    void ON_SERVER_THREAD();
    void ASSIGN_MAIN_THREAD(std::thread::id const&);
    void ASSIGN_SERVER_THREAD(std::thread::id const&);
    void GET_MAIN_THREAD_ID();
};
