    #ifndef W5N_DIARY_H
    #define W5N_DIARY_H

    #include "../include/Message.h"

    #include <string>

    struct Diary
    {
        Diary(const std::string& filename);
        ~Diary();

        std::string filename;
        Message* messages;
        size_t messages_size;
        size_t messages_capacity;

        void add(const std::string& message);
        void add(const Message& message);
        void write();
    };
    #endif