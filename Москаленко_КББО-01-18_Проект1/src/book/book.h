#pragma once
#include <QObject>
#include "define.h"


    class Book
    {
        public:
            int pages;
            _qstr name;
        public:

            Book ( ) { }

            Book (const int book_pages , const _qstr book_name)
                : pages(book_pages) , name(book_name) { }

            ~Book( ) { }

        public:
            /// @return string
            const _qstr
            &get_name()
            {
                return this->name;
            }



    };
