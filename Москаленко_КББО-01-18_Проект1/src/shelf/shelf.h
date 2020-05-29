#pragma once

#include "../book/book.h"


    class Shelf
    {
        _qmap<_qstr , Book> _books;

        public:
            Shelf() { }

            ~Shelf() { }


        public:


            void
            push_back(Book book)
            {
                _books.insert(book.get_name() , book);
            }

            /// book getter
            Book operator[](const _qstr name)
            {
                try {
                    return _books[name];
                } catch (...) { }

            }

            _qmap<_qstr , Book>
            get_books()
            {
                return this->_books;
            }


    };



