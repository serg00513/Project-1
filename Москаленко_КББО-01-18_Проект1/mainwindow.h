#pragma once

#include "src/bookshelf/bookshelf.h"
#include <QListWidgetItem>


    namespace Ui {
        class MainWindow;
    }

        class MainWindow : public QMainWindow
        {
            Q_OBJECT

        public:
            explicit MainWindow(QWidget *parent = nullptr);
            ~MainWindow();

        private slots:
            void on_pushButton_clicked();

            void on_pushButton_2_clicked();


            void on_listWidget_itemClicked(QListWidgetItem *item);

        private:
            Ui::MainWindow *ui;
            BookShelf      bs;
            int current_shelf;

        };

