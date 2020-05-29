#pragma once

#include "../shelf/shelf.h"

class BookShelf
{
    public:
        _vec<Shelf> _shelfs;

    public:

        // base constructor
        BookShelf( ) { }

        // constructor with start count of shelf
        BookShelf(const unsigned long size)
        {
            for(size_t i = 0; i < size; i++)
            {
                _shelfs.push_back(Shelf());
            }
        }

        ~BookShelf( ) { }


    public:

        ///  @param idx -> index of shelf into bookShelf
        ///  @param book -> book , which we want add into this bookShelf
        ///
        void
        add_book(const int idx , const Book book)
        {
            try {
                _shelfs[idx].push_back(book);
            } catch (...) { }
        }



        /// add empty shelf into bookshelf
        void
        add_shelf()
        {
            this->_shelfs.push_back(Shelf());
        }




};
