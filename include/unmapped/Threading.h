#pragma once



namespace Bedrock {

    namespace Threading {

//      void ASSIGN_MAIN_THREAD(std::thread::id const&); //TODO: incomplete function definition
        void ON_MAIN_THREAD();
//      void MakeErrorCode(Bedrock::Threading::AsyncErrc); //TODO: incomplete function definition
        void GET_MAIN_THREAD_ID();
//      void ASSIGN_SERVER_THREAD(std::thread::id const&); //TODO: incomplete function definition
//      void IS_MAIN_THREAD(std::thread::id const&); //TODO: incomplete function definition
        void GetAsyncErrorCategory();
        void ON_SERVER_THREAD();
    };
}
